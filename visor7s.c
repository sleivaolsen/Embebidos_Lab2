//requiere definir pines de transistores
//y pines de visores de 7 segmentos

//Pendiente averiguar 8 pines con direcciones de memoria contiguas
A=0;B=0;C=0;D=0;E=0;F=0;G=0;dp=0;

void visor(int num);
void barrido(int num);

//escribe un dígito en un display de 7 segmentos. Invertir valores para cátodo comun...
void visor(num){
	switch(num){
  	case 0:
    	A=1;B=1;C=1;D=1;E=1;F=1;G=0;	//     A
  		break; 												//  F     B
    case 1: 												//     G
      A=0;B=1;C=1;D=0;E=0;F=0;G=0;	//  E     C
			break; 												//     D   dp
    case 2: 												
      A=1;B=1;C=0;D=1;E=1;F=0;G=1;
      break; 
    case 3:
      A=1;B=1;C=1;D=1;E=0;F=0;G=1;
      break;
    case 4:
      A=0;B=1;C=1;D=0;E=0;F=1;G=1;
      break;
    case 5:
      A=1;B=0;C=1;D=1;E=0;F=1;G=1;
      break;
    case 6:
      A=1;B=0;C=1;D=1;E=1;F=1;G=1;
      break;
    case 7:
      A=1;B=1;C=1;D=0;E=0;F=0;G=0;
      break;
		case 8:
      A=1;B=1;C=1;D=1;E=1;F=1;G=1;
      break;
		case 9:
      A=1;B=1;C=1;D=1;E=0;F=1;G=1;
      break;
  }
}

//para asegurar una tasa de refresco constante para todos los displays, llamaremos a barrido() usando interrupciones de Timer
void barrido(num){
	transistor++;
	switch(transistor){
	case 1:
	  if(num<0){ visorG=1;}
	  else{visorG=0;}
	  break;
	case 2:
	  visor(num/10);
	  break;
	case 3:
	  visor(num%10);
	  transistor=0;
	break;
}	

//Interrupción por Timer cada 10ms, en la que se llama a barrido(angulo_promedio[modo])
//modo=1 muestra x, modo=2 muestra y, modo=3 muestra z... 
