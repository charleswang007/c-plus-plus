/* �d���ɦW:str_ptr.c ,�r����а}�C���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    /* �ŧi�}�C�P�ܼ� */
    char str_array[7][5]={"Mon","Tue","Wed",
                          "Thu","Frid","Sat","Sun"};
    char *str_ptr_array[7]={"Mon","Tuesday","Wed",
                            "Thursday","Friday","Sat","Sun"};
    int i,j;

    /* �G���r���}�C����� */
    printf("2d char array:\n");/* ��ܼ��Y */
    printf("----------------\n");

    for(i=0;i<7;i++){
        printf("{");

        for(j=0;j<5;++j)
            printf("%c.",str_array[i][j]);

        printf("}\n");
    }

    /* �r�����Ъ��r�ꤺ�e��� */
    printf("\nchar pointer array:\n");/* ��ܼ��Y */
    printf("----------------\n");

    for(i=0;i<7;i++){
        printf("{");

        j=0;
        while(str_ptr_array[i][j]!=NULL)/* �ˬd�O�_�v��r�굲�� */
            printf("%c.",str_ptr_array[i][j++]);

        printf("}\n");
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
