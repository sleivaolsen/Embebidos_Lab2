//Distintas opciones para trabajar visores de 7 segmentos
//requiere definir pines de transistores
//y pines de visores de 7 segmentos

//Pendiente averiguar 8 pines con direcciones de memoria contiguas
//Para poder usar elementos de un vector "anodo[num]" o "catodo[num]"
//uint8_t catodo[]={0b1111110,0b0110000,0b1101101,0b1111001,0b0110011,5,6,7,8,9} 
//A=0;B=0;C=0;D=0;E=0;F=0;G=0;dp=0;

void visor(uint8_t num);
void barrido(int num);

//escribe un dígito en un display de 7 segmentos de cátodo común. Invertir valores para ánodo comun...
void visor(uint8_t num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 0);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 0);
		break;
	case 2:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 0);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 3:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 4:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 0);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 5:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 0);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 6:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 0);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 7:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 0);
		break;
	case 8:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 9:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	}
}

//para asegurar una tasa de refresco constante para todos los displays, llamaremos a barrido() usando interrupciones de Timer
//Interrupción por Timer cada 10ms, en la que se llama a barrido(angulo_promedio[modo]), por ejemplo.
//modo=1 muestra x, modo=2 muestra y, modo=3 muestra z... El cambio de modo lo vemos en el while del main.

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
