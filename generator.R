data <- read.csv("artsey.csv")
fileConn <- file("macros.c")
holdDelay <- 200
holdDelay <- soString(holdDelay)

str = "bool is_shift_lock_active = false; 
bool is_alt_tab_active = false; // ADD this near the begining of keymap.c;
uint16_t key_timer;


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
hold1 <- toString(data[i,4])
hold2 <- toString(data[i,7])
hold3 <- toString(data[i,10])
hold4 <- toString(data[i,13])
hold5 <- toString(data[i,16])
hold6 <- toString(data[i,19])
hold7 <- toString(data[i,22])
hold8 <- toString(data[i,25])
hold9 <- toString(data[i,28])
down1 <- toString(data[i,2])
down2 <- toString(data[i,5])
down3 <- toString(data[i,8])
down4 <- toString(data[i,11])
down5 <- toString(data[i,14])
down6 <- toString(data[i,17])
down7 <- toString(data[i,20])
down8 <- toString(data[i,23])
down9 <- toString(data[i,26])
up1 <- toString(data[i,3])
up2 <- toString(data[i,6])
up3 <- toString(data[i,9])
up4 <- toString(data[i,12])
up5 <- toString(data[i,15])
up6 <- toString(data[i,18])
up7 <- toString(data[i,21])
up8 <- toString(data[i,24])
up9 <- toString(data[i,27])

str = paste(str,"case A_",key,":\n",sep="")
str = paste(str,"if(record->event.pressed) {\n",sep="")
str = paste(str,"key_timer = timer_read();\n",sep="")

if(!(down1==""|down1=="NA")){
str = paste(str,"if (layernumber == 1) {\n",sep="")
str = paste(str,down1,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down2==""|down2=="NA")){
str = paste(str,"if (layernumber == 2) {\n",sep="")
str = paste(str,down2,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down3==""|down3=="NA")){
str = paste(str,"if (layernumber == 3) {\n",sep="")
str = paste(str,down3,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down4==""|down4=="NA")){
str = paste(str,"if (layernumber == 4) {\n",sep="")
str = paste(str,down4,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down5==""|down5=="NA")){
str = paste(str,"if (layernumber == 5) {\n",sep="")
str = paste(str,down5,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down6==""|down6=="NA")){
str = paste(str,"if (layernumber == 6) {\n",sep="")
str = paste(str,down6,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down7==""|down7=="NA")){
str = paste(str,"if (layernumber == 7) {\n",sep="")
str = paste(str,down7,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down8==""|down8=="NA")){
str = paste(str,"if (layernumber == 8) {\n",sep="")
str = paste(str,down8,";\n",sep="")
str = paste(str,"}\n",sep="")
}
if(!(down9==""|down9=="NA")){
str = paste(str,"if (layernumber == 9) {\n",sep="")
str = paste(str,down9,";\n",sep="")
str = paste(str,"}\n",sep="")
}


str = paste(str,"}\n",sep="")
str = paste(str,"else {\n",sep="")
str = paste(str,"if(timer_elapsed(key_timer) >",holdDelay,") {\n",sep="")
if(!(hold1==""|hold1=="NA")){
str = paste(str,"if (layernumber == 1) {\n",sep="")
str = paste(str,hold1,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold2==""|hold2=="NA")){
str = paste(str,"if (layernumber == 2) {\n",sep="")
str = paste(str,hold2,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold3==""|hold3=="NA")){
str = paste(str,"if (layernumber == 3) {\n",sep="")
str = paste(str,hold3,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold4==""|hold4=="NA")){
str = paste(str,"if (layernumber == 4) {\n",sep="")
str = paste(str,hold4,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold5==""|hold5=="NA")){
str = paste(str,"if (layernumber == 5) {\n",sep="")
str = paste(str,hold5,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold6==""|hold6=="NA")){
str = paste(str,"if (layernumber == 6) {\n",sep="")
str = paste(str,hold6,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold7==""|hold7=="NA")){
str = paste(str,"if (layernumber == 7) {\n",sep="")
str = paste(str,hold7,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold8==""|hold8=="NA")){
str = paste(str,"if (layernumber == 8) {\n",sep="")
str = paste(str,hold8,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(hold9==""|hold9=="NA")){
str = paste(str,"if (layernumber == 9) {\n",sep="")
str = paste(str,hold9,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
str =paste(str,"}\n")

str = paste(str,"if(timer_elapsed(key_timer) <",holdDelay,") {\n",sep="")
if(!(up1==""|up1=="NA")){
str = paste(str,"if (layernumber == 1) {\n",sep="")
str = paste(str,up1,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up2==""|up2=="NA")){
str = paste(str,"if (layernumber == 2) {\n",sep="")
str = paste(str,up2,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up3==""|up3=="NA")){
str = paste(str,"if (layernumber == 3) {\n",sep="")
str = paste(str,up3,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up4==""|up4=="NA")){
str = paste(str,"if (layernumber == 4) {\n",sep="")
str = paste(str,up4,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up5==""|up5=="NA")){
str = paste(str,"if (layernumber == 5) {\n",sep="")
str = paste(str,up5,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up6==""|up6=="NA")){
str = paste(str,"if (layernumber == 6) {\n",sep="")
str = paste(str,up6,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up7==""|up7=="NA")){
str = paste(str,"if (layernumber == 7) {\n",sep="")
str = paste(str,up7,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up8==""|up8=="NA")){
str = paste(str,"if (layernumber == 8) {\n",sep="")
str = paste(str,up8,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
if(!(up9==""|up9=="NA")){
str = paste(str,"if (layernumber == 9) {\n",sep="")
str = paste(str,up9,";\n",sep="")
str = paste(str,"return false;\n}\n",sep="")
}
str =paste(str,"}\n")
str =paste(str,"}\n")

str =paste(str,"break;\n")
 

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
  _ARTSEY_BASE = 0,
  _ARTSEY_NUM,
  _ARTSEY_SYM,
  _ARTSEY_BRAC,
  _ARTSEY_NAV, 
  _ARTSEY_MOU,
  _ARTSEY_CUSTOM,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  LOCK_SHIFT,\n"

for(i in 1:dim(data)[1]){
key <- toString(data[i,1])
str = paste(str,"A_",key,",\n",sep="")
}
str = paste(str,"};")


write(str,fileConn)

close(fileConn)

fileConn <- file("artsey_basic.def")
str = ""
for(i in 1:dim(data)[1]){
unlisted <- unlist(strsplit(data[i,1],""))
if(length(unlisted)>1){
str = paste(str,"COMB(",data[i,1],"COMB,",sep="")
str = paste(str,"A_",data[i,1],",",sep="")
str = paste(str,"A_",unlisted[1],sep="")
for(j in 2:length(unlisted)){
str = paste(str,",A_",unlisted[j],sep="")
}
str = paste(str,")\n",sep="")
}

}


write(str,fileConn)

close(fileConn)

