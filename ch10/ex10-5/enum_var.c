/* �d���ɦW:enum_var.c ,�C�|�ܼƪ��ϥνd�� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

enum  FRUIT {/* �C�|���A FRUIT ���w�q */
    APPLE,  /* �w�]�Ȭ���� 0 */
    ORANGE, /* �w�]�Ȭ���� 1 */
    BANANA, /* �w�]�Ȭ���� 2 */
    PEAR,   /* �w�]�Ȭ���� 3 */
    GRAPE   /* �w�]�Ȭ���� 4 */
};

int main(void)
{
    enum FRUIT fruit;/* �C�|�ܼƫŧi */

    char *fruit_name[]={ /*�H�r��}�C���ШӦs��C�|�`�ƦW��*/
          "APPLE","ORANGE","BANANA","PEAR","GRAPE"};

    /* �H�j����ܦC�|�`�ƦW�ٻP�`�ƭ� */
    for(fruit=APPLE;fruit<=GRAPE;++fruit){
        printf("%s=%d\n",fruit_name[fruit],fruit);
    }

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
