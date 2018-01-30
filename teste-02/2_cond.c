int cond(char str[]) {
  short flag_min = 0; //minuscula
  short flag_mai = 0; //mauscula
  short flag_d = 0; //digito
  short flags = 0; //total flags
  
  int n = 0;
  
  while(str[n] != '\0' && flags <= 1) {
      if(str[n] >= 'a' && str[n]<='z' && !flag_min)
        flag_min++;
      if(str[n] >= 'A' && str[n]<='Z' && !flag_mai)
        flag_mai++;
      if(str[n] >= '0' && str[n]<='9' && !flag_d)
        flag_d++;
      flags = flag_min + flag_mai + flag_d;
      n++;
  }
  if(flags >= 2)
      return 1;
  else
      return 0;
}
