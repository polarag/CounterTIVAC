    
    
    //print_no
    
    void print_no(int no){
    
 
	
  DIO_WritePort(1 ,0X01 ,STD_HIGH); //DIO_WritePort(1 ,0X01 ,STD_HIGH) a
  DIO_WritePort(1 ,0X02 ,STD_HIGH);  //DIO_WritePort(1 ,0X02 ,STD_HIGH)b
  DIO_WritePort(1 ,0X04 ,STD_HIGH);  //DIO_WritePort(1 ,0X04 ,STD_HIGH)c
  DIO_WritePort(1 ,0X08 ,STD_HIGH);  //DIO_WritePort(1 ,0X08 ,STD_HIGH)d
  DIO_WritePort(1 ,0X10 ,STD_HIGH);  //DIO_WritePort(1 ,0X10 ,STD_HIGH)e
  DIO_WritePort(1 ,0X20 ,STD_HIGH);  //DIO_WritePort(1 ,0X20 ,STD_HIGH)f
  DIO_WritePort(1 ,0X40 ,STD_HIGH);  //DIO_WritePort(1 ,0X40 ,STD_HIGH)g
switch(no) {
  case 0:

   DIO_WritePort(1 ,0X01 ,STD_LOW);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_LOW);
  DIO_WritePort(1 ,0X08 ,STD_LOW);
  DIO_WritePort(1 ,0X20 ,STD_LOW);
  DIO_WritePort(1 ,0X20 ,STD_LOW);
  DIO_WritePort(1 ,0X40 ,STD_HIGH);
    break;
    
  case 1:   DIO_WritePort(1 ,0X01 ,STD_HIGH);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_LOW);
  DIO_WritePort(1 ,0X08 ,STD_HIGH);
  DIO_WritePort(1 ,0X10 ,STD_HIGH);
  DIO_WritePort(1 ,0X20 ,STD_HIGH);
  DIO_WritePort(1 ,0X40 ,STD_HIGH);
    break;


    case 2:   
    DIO_WritePort(1 ,0X01 ,STD_LOW);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_HIGH);
  DIO_WritePort(1 ,0X08 ,STD_LOW);
  DIO_WritePort(1 ,0X20 ,STD_LOW);
  DIO_WritePort(1 ,0X20 ,STD_HIGH);
  DIO_WritePort(1 ,0X40 ,STD_LOW);
    break;

    case 3:   
  DIO_WritePort(1 ,0X01 ,STD_LOW);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_LOW);
  DIO_WritePort(1 ,0X08 ,STD_LOW);
  DIO_WritePort(1 ,0X10 ,STD_HIGH);
  DIO_WritePort(1 ,0X20 ,STD_HIGH);
  DIO_WritePort(1 ,0X40 ,STD_LOW);
    break;


    case 4:   
 DIO_WritePort(1 ,0X01 ,STD_HIGH);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_LOW);
  DIO_WritePort(1 ,0X08 ,STD_HIGH);
  DIO_WritePort(1 ,0X10 ,STD_HIGH);
  DIO_WritePort(1 ,0X20 ,STD_LOW);
  DIO_WritePort(1 ,0X40 ,STD_LOW);
    break;

    case 5:   DIO_WritePort(1 ,0X01 ,STD_LOW);//A
  DIO_WritePort(1 ,0X02 ,STD_HIGH);//B
  DIO_WritePort(1 ,0X04 ,STD_LOW);//C
  DIO_WritePort(1 ,0X08 ,STD_LOW);//D
  DIO_WritePort(1 ,0X10 ,STD_HIGH);//E
  DIO_WritePort(1 ,0X20 ,STD_LOW);//F
  DIO_WritePort(1 ,0X40 ,STD_LOW);//G
    break;
     case 6:   DIO_WritePort(1 ,0X01 ,STD_LOW);//A
  DIO_WritePort(1 ,0X02 ,STD_HIGH);//B
  DIO_WritePort(1 ,0X04 ,STD_LOW);//C
  DIO_WritePort(1 ,0X08 ,STD_LOW);//D
  DIO_WritePort(1 ,0X20 ,STD_LOW);//E
  DIO_WritePort(1 ,0X20 ,STD_LOW);//F
  DIO_WritePort(1 ,0X40 ,STD_LOW);//G
    break;

    
  case 7:   DIO_WritePort(1 ,0X01 ,STD_LOW);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_LOW);
  DIO_WritePort(1 ,0X08 ,STD_HIGH);
  DIO_WritePort(1 ,0X10 ,STD_HIGH);
  DIO_WritePort(1 ,0X20 ,STD_HIGH);
  DIO_WritePort(1 ,0X40 ,STD_HIGH);
    break;

    case 8:

   DIO_WritePort(1 ,0X01 ,STD_LOW);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_LOW);
  DIO_WritePort(1 ,0X08 ,STD_LOW);
  DIO_WritePort(1 ,0X20 ,STD_LOW);
  DIO_WritePort(1 ,0X20 ,STD_LOW);
  DIO_WritePort(1 ,0X40 ,STD_LOW);
    break;
     case 9:   
  DIO_WritePort(1 ,0X01 ,STD_LOW);
  DIO_WritePort(1 ,0X02 ,STD_LOW);
  DIO_WritePort(1 ,0X04 ,STD_LOW);
  DIO_WritePort(1 ,0X08 ,STD_LOW);
  DIO_WritePort(1 ,0X10 ,STD_HIGH);
  DIO_WritePort(1 ,0X20 ,STD_LOW);
  DIO_WritePort(1 ,0X40 ,STD_LOW);
    break;
    
  
  
  }
}
