/* �d���ɦW:ret_val.c , ��ƶǦ^�Ȫ��d�ҡG�p���}����C���� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

/* �p��j�p��size����}arr����C���� */
int det_val(int *arr,int size);/* ��ƪ��쫬�ŧi */

/* ���o�j�p��size����}arr�A���wcol,rol�}�C������*/
int arr_ele(int *arr,int size,int col,int rol);/* ��ƭ쫬�ŧi */

int main(void)/* �D�{���}�l */
{
    int arr[3][3]={{1,1,2},
                   {3,4,5},
                   {6,7,8}};

    /* ��ܰ}�C����C���� */
    printf("determinant of arr = %d\n",det_val(arr[0],3));

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}

/*  det_val ��ƪ��ŧi �@�ΡG�p��ǤJ��}����C��
    �ǤJ�ȡG�}�C arr�B��}���j�p size
    �ǥX�ȡG��}����C�� */
int det_val(int *arr,int size)
{
    int i,j,det=0,temp;

    /* �p���C���� */
    for(i=0;i<size;++i){/* �p��C�@�檺�ۭ��� */
        temp=1;
        for(j=0;j<size;++j){/* �p�⤸���k�U���u�ۭ� */
            temp *= arr_ele(arr,3,i+j,j);
        }

        det+=temp;/* �N�k�U���u�ۭ��ȥ[���C���Ȥ� */

        temp=1;
        for(j=0;j<size;++j){/* �p�⤸���k�W���u�ۭ� */
            temp *= arr_ele(arr,3,i-j,j);
        }

        det-=temp;/* �N�k�W���u�ۭ��ȱq��C���Ȥ����� */
    }

    return det;/* �^�Ǧ�C���� */
}
/*  arr_ele ��ƪ��ŧi �@�ΡG���o��}���w��C��������
    �ǤJ�ȡG�}�C arr�B��}���j�p size�A
            ���w����Ccol,rol(�i���b0~size-1���d��A�۰ʭץ�)
    �ǥX�ȡG���w���}�C������ */
int arr_ele(int *arr,int size,int col,int rol)
{
    /* ��col�Prol���b 0~(size-1)�A�{���۰ʧ⥦�ץ���d�� */
    while(col<0) col+=size;/* col <0 */
    while(rol<0) rol+=size;/* rol <0 */

    if(col>=size)/* col > size-1 */
        col %= size;
    if(rol>=size)/* rol > size-1 */
        rol %= size;

    return arr[col*size+rol];/* �^�ǰ}�C������ */
}



