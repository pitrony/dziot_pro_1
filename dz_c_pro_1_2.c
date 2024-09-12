//Урок 1. Побитовые операции и битовые поля
//Задание 2. Инверсия старших
//На вход программе подается беззнаковое 32-битное целое число N. Требуется
//изменить значения всех битов старшего байта числа на противоположные и
//вывести полученное таким образом число.
//Данные на входе: Беззнаковое 32-битное целое число N
//Данные на выходе: Одно целое число.
// Пример №1
//Данные на входе: 1
//Данные на выходе: 4278190081

#include <stdio.h>
#include <stdint.h>
#include <math.h>
void printB(uint32_t dec)
{
uint8_t count=1;
uint32_t rez=dec;
uint32_t maska=0x7fffffff;
uint32_t maska2=0x80000000;
for(int i=0;i<32;i++)
	{
if((rez&(~(maska)))==0)
printf("0");
else
printf("1");
maska>>=1;// move to right
maska=maska2 | maska;// + 1 in begining
        if(count==4)
        {
        printf(" ");
	    count=0;
        }
count++;
	} //while
}//void

int main()
{
const uint32_t k=8; // 1 byte = 8 bit
uint32_t mask=0xffffffff;
mask>>=k;
uint32_t N=0;
scanf("%u",& N);
printf("\n inputing data in bin ");
printB(N);
printf("\n");
uint32_t number=(N ^ (~mask));
printf("outputing data in bin ");
printB(number);
printf("\n%u", number);
return 0;
}
