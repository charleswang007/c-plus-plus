/* �d���ɦW:sta_fun\module.c , ��ƼҲ� */

/* �u�e�\�b��ƼҲդ��ϥΪ��R�A��ƭ쫬�ŧi */
static int int_square(int value);/* �p��value������ */

/* ��� value ������� */
void display_int_square(int value){
    printf("the square of %d is %d\n",value,int_square(value));
}

/* �p��value������A�u��b module.c ���I�s  */
static int int_square(int value){
    return value*value;
}
