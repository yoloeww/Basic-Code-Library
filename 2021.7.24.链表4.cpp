#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[20];
    float math;
};
struct node
{
    struct student data;
    struct node *next;
};
struct node* create()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;
    return head;
}
//�������
struct node* creatt(struct student data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insert(struct node* head, struct student data)
{
    struct node* newnode = creatt(data); //����������
    newnode->next = head->next;
    head->next = newnode;
}
void sortList(struct node* pList, int n)
{
    //�ж������Ƿ����,�Ƿ�Ϊ��
    if (NULL == pList || NULL == pList->next)
    {
        printf("����û�����ѧ����Ϣ\n");
        exit(-1);
    }
    struct node* p = pList->next;
    //����
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        //��һ������֮����ָ������ָ��ͷ���
        p = pList->next;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (p->data.math > p->next->data.math)
            {
                ///�ɼ�
                float tmp1 = p->data.math;
                p->data.math = p->next->data.math;
                p->next->data.math = tmp1;
                //ѧ��
                char tmp2[20]; 
                strcpy(tmp2, p->data.name);
                strcpy(p->data.name, p->next->data.name);
                strcpy(p->next->data.name, tmp2);
                struct node *m = p;
                p = p->next;
                p->next = m;
            }
            p = p->next;
        }
    }
}
void show(struct node * head)
{
    struct node* pmove = head->next;
    printf("name and math is:\n");
    while (pmove)
    {
        printf("%s %6.2f\n", pmove->data.name, pmove->data.math);
        pmove = pmove->next;
    }
    printf("\n");
}
//����
void destroy(struct node * head)
{
    struct node *p = head, *del = NULL;
    while (p)
    {
        del = p;
        p = p->next;
        free(del);
    }
    head = NULL;
}
int main()
{
    struct node*list = create();
    struct student info;
    for (int i = 0; i < 3; i++)
    {
        printf("������ѧ�������ͳɼ�:\n");
        scanf("%s%f", info.name, &info.math);
        insert(list, info);
    }
    sortList(list, 3);
    show(list);
    destroy(list);
	return 0;
}

