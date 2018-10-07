/* �d���ɦW:realloc.c ,���ʺA�}�C���j�p */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int *ptr_i1,*ptr_i2;/* �ŧi��ƫ����ܼ� */

    /* ���O�t�m 5*int �j�p���O���鵹 ptr_i1 �P ptr_i2 */
    ptr_i1=calloc(5,sizeof(int));
    ptr_i2=calloc(5,sizeof(int));

    /* �p�G ptr_i1 �� ptr_i2 �S���t�m��O����h�����{�� */
    if( (ptr_i1==NULL) || (ptr_i2==NULL) ){
        printf("function can't allocate memory!\n");
        system("PAUSE");
        abort();/* �j����{�� */
    }

    /* ��ܲĤ@���t�m�ɤ��O����_�l��} */
    printf("First calloc :\n");
    printf("Address of ptr_i1=%p\n",ptr_i1);
    printf("Address of ptr_i2=%p\n",ptr_i2);

    /* �H realloc ��ơA���s�t�m�O����j�p */
    ptr_i1=realloc(ptr_i1,3*sizeof(int));
    ptr_i2=realloc(ptr_i2,1000*sizeof(int));

    /* �p�G ptr_i1 �� ptr_i2 �S���t�m��O����h�����{�� */
    if( (ptr_i1==NULL) || (ptr_i2==NULL) ){
        printf("function can't allocate memory!\n");
        system("PAUSE");
        abort();/* �j����{�� */
    }

    /* ��ܸg�L realloc ��ƭ��s�t�m��O���餧�_�l��} */
    printf("\nAfter realloc :\n");
    printf("Address of ptr_i1=%p\n",ptr_i1);
    printf("Address of ptr_i2=%p\n",ptr_i2);

    free(ptr_i1);/* ������� ptr_i1 �ҫ��V���ʺA�O���� */
    free(ptr_i2);/* ������� ptr_i2 �ҫ��V���ʺA�O���� */

    system("PAUSE");
    return 0;
}
