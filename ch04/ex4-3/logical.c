/* �d���ɦW:logical.c ,�޿�B��l���ϥ� */
#include <stdio.h>/* �ޤJ���Y�� */
#include <stdlib.h>

int main(void)
{
    int A=7,B=3;/* �ŧi�ܼƨó]�w��� */

    /* �i���޿�B��ÿ�X���G */
    printf("A=7,B=3\n\n");
    printf("(A>B)&&(A<B) is %d\n",(A>B)&&(A<B));/*���G����*/
    printf("(A>B)&&(A>B) is %d\n",(A>B)&&(A>B));/*���G���u*/
    printf("(A>B)||(A<B) is %d\n",(A>B)||(A<B));/*���G���u*/
    printf("(A<B)||(A==B) is %d\n",(A<B)||(A==B));/*���G����*/
    printf("!(A<B) is %d\n",!(A<B));/*���G���u*/

    system("PAUSE");/* �Ȱ��{������ */
    return 0;/* <-�{�����`�����A�Ǧ^0 */
}
