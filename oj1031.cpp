#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STACK 200
#define MAX_EXPR 10  // �����ʽ����

// ������ջ
long long num_stack[MAX_STACK];
int num_top = -1;

// �����ջ
char op_stack[MAX_STACK];
int op_top = -1;

// ����洢����
long long results[MAX_EXPR];
int result_count = 0;

void push_num(long long num) { num_stack[++num_top] = num; }
long long pop_num() { return num_stack[num_top--]; }

void push_op(char op) { op_stack[++op_top] = op; }
char pop_op() { return op_stack[op_top--]; }

int get_priority(char op) {
    return (op == '+' || op == '-') ? 1 : (op == '*') ? 2 : 0;
}

void compute() {
    long long b = pop_num();
    long long a = pop_num();
    switch (pop_op()) {
    case '+': push_num(a + b); break;
    case '-': push_num(a - b); break;
    case '*': push_num(a * b); break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();  // ������뻺���������ַ�

    char expr[101];
    for (int i = 0; i < n; i++) {
        fgets(expr, 101, stdin);
        expr[strcspn(expr, "\n")] = 0;  // �����з�

        // ����ջָ��
        num_top = -1;
        op_top = -1;

        char* p = expr;
        while (*p) {
            if (isdigit(*p)) {
                long long num = 0;
                while (*p && isdigit(*p))
                    num = num * 10 + (*p++ - '0');
                push_num(num);
                continue;
            }

            if (*p == '(') {
                push_op(*p);
            }
            else if (*p == ')') {
                while (op_stack[op_top] != '(')
                    compute();
                pop_op();  // ����������
            }
            else if (*p == '+' || *p == '-' || *p == '*') {
                while (op_top >= 0 &&
                    op_stack[op_top] != '(' &&
                    get_priority(*p) <= get_priority(op_stack[op_top])) {
                    compute();
                }
                push_op(*p);
            }
            p++;
        }

        // ����ʣ�������
        while (op_top >= 0)
            compute();

        // ������
        results[result_count++] = num_stack[num_top];
    }

    // ͳһ������
    for (int i = 0; i < result_count; i++) {
        printf("%lld\n", results[i]);
    }

    return 0;
}