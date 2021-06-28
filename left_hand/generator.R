setwd(dirname(rstudioapi::getActiveDocumentContext()$path))
data <- read.csv("artsey_combos.csv")
fileConn <- file("macros.c")


str = "bool is_shift_lock_active = false; 
bool other_key_pressed = false;
bool is_alt_tab_active = false; // ADD this near the begining of keymap.c;
uint16_t key_timer = 0;


bool process_record_user(uint16_t keycode, keyrecord_t *record) {


  switch (keycode) {


    case LOCK_SHIFT:
      if (record->event.pressed) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        }         
      } 
    break;
"
for(i in 1:dim(data)[1]){
	key <- toString(data[i,1])
	layer <- unlist(strsplit(data[i,2],","))
	actionDown <- toString(data[i,3])
	actionUp <- ""
	if (grepl("tap_code", actionDown, fixed = TRUE)){
	  actionUp <- sub("tap_code", "unregister_code", actionDown)
	  actionDown <- sub("tap_code", "register_code", actionDown)
	}
	if(!(actionDown==""|actionDown=="NA")){
		for(j in 1:length(layer)){
		str = paste(str,"case A_",layer[j],"_",key,":\n",sep="")
		str = paste(str,"if(record->event.pressed) {\n",sep="")
		str = paste(str,actionDown,";\n",sep="")
		str = paste(str,"}\n",sep="")
		str = paste(str,"else {\n",sep="")
		if(!(actionUp==""|actionUp=="NA")){
		  str = paste(str,actionUp,";\n",sep="")
		}
		str = paste(str,"}\n",sep="")
		str =paste(str,"break;\n")
	}
	}
}

str =paste(str,"
  }
  return true;
};
")
write(str,fileConn)

close(fileConn)

fileConn <- file("artsey.h")

str = "#pragma once
#include \"quantum.h\"



enum layers {
  _A_BASE = 0,
  _A_NUM,
  _A_SYM,
  _A_BRAC,
  _A_NAV, 
  _A_MOU,
  _A_CUSTOM,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  LOCK_SHIFT,\n"

for(i in 1:dim(data)[1]){
  key <- toString(data[i,1])
  layer <- unlist(strsplit(data[i,2],","))
  for(j in 1:length(layer)){
    str = paste(str,"A_",layer[j],"_",key,",\n",sep="")
  }
}







data <- read.csv("artsey_keycodes.csv")

for(i in 1:dim(data)[1]){
  key <- toString(data[i,1])
  layer <- toString(data[i,2])
  tap <- toString(data[i,3])
  hold <- toString(data[i,4])
  if((tap==""|tap=="NA")){
    str = paste(str,"A_",layer,"_",key,",\n",sep="")
  }
  else if((hold==""|hold=="NA")){
    str = paste(str,"A_",layer,"_",key," = ",sep="")
    str = paste(str,tap,",\n",sep="")
  }
  else{
    str = paste(str,"A_",layer,"_",key," = ",sep="")
    str = paste(str,"LT(",hold,",",tap,"),\n",sep="")
  }
}


str = paste(str,"};")


write(str,fileConn)

close(fileConn)

data <- read.csv("artsey_combos.csv")

fileConn <- file("artsey_basic.def")
str = ""
for(i in 1:dim(data)[1]){
  layer <- unlist(strsplit(data[i,2],","))
  action <- data[i,3]
  unlisted <- unlist(strsplit(data[i,1],""))
  if(length(unlisted)>1){
    for(j in 1:length(layer)){
      str = paste(str,"COMB(",data[i,1],layer[j],"COMB,",sep="")
      str = paste(str,"A_",layer[j],"_",data[i,1],",",sep="")
      str = paste(str,"A_",layer[j],"_",unlisted[1],sep="")
      for(k in 2:length(unlisted)){
        str = paste(str,",A_",layer[j],"_",unlisted[k],sep="")
      }
      str = paste(str,")\n",sep="")
    }
  }
  
}


write(str,fileConn)

close(fileConn)

