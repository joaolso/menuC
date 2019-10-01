#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <time.h>


//================= inicio das questoes do capitulo 4 ==================//

void cap4_a ()
{
 float x,a,b;
 printf ("Calcular a diferenca do maior valor pelo menor\n\n\n");
 printf ("Digite 2 numeros\n");
 scanf ("%f%f",&a,&b);
   if (a>b) 
      x=a-b;
   else
       x=b-a;
 printf ("Resultado:%.2f\n",x);
 system ("pause");
 getch ();
          
}

//============================================================//

void cap4_b ()
{
int n;
printf ("Transformar numeros negativos em positivos\n\n\n");
printf ("Digite um numero\n");
scanf ("%d",&n);
    if (n<0)
       n=n*(-1);
    else
n=n;
printf ("Resultado %d\n",n);
system ("pause");
getch ();
}

//============================================================//

void cap4_c ()
{
     float n1,n2,n3,n4,md;
    printf ("Calcular a media do aluno, e informa se estra aprovado ou nao\n\n\n");
    printf ("Inform quatro notas:\n");
    scanf ("%f%f%f%f",&n1,&n2,&n3,&n4);
    md=(n1+n2+n3+n4)/4;
    if (md>=5)
       printf ("Aprovado\n");
    else
        printf ("Reprovado\n");
    printf ("Media%f\n",md);
    system ("pause");
    getch ();
 }

//============================================================//

void cap4_d ()
{
 float n1,n2,n3,n4,md,md2,ne,nm;
 printf ("Media aritmetica e media do exame: \n\n\n");
    printf ("Informe as quatro notas dos alunos\n");
    scanf ("%f%f%f%f",&n1,&n2,&n3,&n4);
    md=(n1+n2+n3+n4)/4;
    if (md>=7)
    {
      printf ("Aprovado\n");
      printf ("Nota da media %.2f\n",md);
      system ("pause");
      }
     else
     {
         printf ("Informe a nota do exame:\n");
         scanf ("%f",&ne);
         md2=(md+ne)/2;
     if (md2 >=5)
        printf ("Aprovado em Exame\n");
     else
         printf ("Reprovado");
         printf ("Nota Final %.2f\n",md); 
         system ("pause"); 
     }
     getch ();
}

//============================================================//

void cap4_e ()
{
    float a,b,c,d;
    printf ("Verificar quantas raizes a equacao oferece:\n\n\n");
    printf ("Informe A\n");
    scanf ("%f",&a);
    printf ("Informe B\n");
    scanf ("%f",&b);
    printf ("Informe C\n");
    scanf ("%f",&c);
    
    d=(b*b) - 4*a*c;
    if (d=0)
       printf ("Uma Solucao\n");
    else
        if (d<0)
           printf ("Sem Solucoes\n");
    else
        printf ("Duas Solucoes\n");
    system ("pause");
    getch ();
}

//============================================================//

void cap4_f ()
{
     int a,b,c,ax;
    printf ("Colocar numeros em ordem crescente\n\n\n");
    printf ("Insira o primeiro valor\n");
     scanf ("%d",&a);
    printf ("Insira o segundo valor\n");
     scanf ("%d",&b);
    printf ("Insira o terceiro valor\n");
     scanf ("%d",&c);
    
    if (a>b)
    {
      ax=a;
      a=b;
      b=ax;
      }
     if (b>c)
    {
       ax=b;
       b=c;
       c=ax;
     }
     if (a>b)
     {
         ax=a;
         a=b;
         b=ax;
      } 
  printf ("Ordem crescente: %d, %d, %d\n",a,b,c);
    system ("pause");
    getch ();
}

//============================================================//

void cap4_g ()
{
  int a,b,c,d;
  printf ("Verificar se os numeros correspondidos em A,B,C,D sao divisiveis por 2 e 3\n\n\n");
  printf ("Informe o valor de A,B,C,D:\n");
  scanf ("%d %d %d %d",&a,&b,&c,&d);
  
  if ((a%2==0) && (a%3==0))
     printf ("E divisivel por 2 e 3: %d\n",a);
  if ((b%2==0) && (b%3==0))
     printf ("E divisivel por 2 e 3: %d\n",b);
  if ((c%2==0) && (b%3==0))
     printf ("E divisivel por 2 e 3: %d\n",c);
  if ((d%2==0) && (b%3==0))
     printf ("E divisivel por 2 e 3: %d\n",d);
   system ("pause");
   getch ();
}

//============================================================//

void cap4_h ()
{
     int a,b,c,d;
  printf ("Verificar se os numeros correspondidos em A,B,C sao divisiveis por 2 ou 3\n");
  printf ("Informe o valor de A,B,C,D:\n");
  scanf ("%d %d %d %d",&a,&b,&c,&d);
  
  if (a%2==0 || a%3==0)
     printf ("E divisivel por 2 e 3: %d\n",a);
  if (b%2==0 || b%3==0)
     printf ("E divisivel por 2 e 3: %d\n",b);
  if (c%2==0 || b%3==0)
     printf ("E divisivel por 2 e 3: %d\n",c);
  if (d%2==0 || b%3==0)
     printf ("E divisivel por 2 e 3: %d\n",d);
   system ("pause");
   getch ();
}

//============================================================//

void cap4_i ()
{
     int a,b,c,d,e,menor,maior;
    printf ("Ler 5 valores e apresentar qual e o maior e qual e o menor: \n\n\n");
    printf ("Informe os 5 numeros\n");
    scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    maior=a;
    menor=a;
    if (b>maior)
       maior=b;
    if (b<menor)
       menor=b;
    if (c>maior)
       maior=c;
    if (c<menor)
       menor=c;
    if (d>maior)
       maior=d;
    if (d<menor)
       menor=d;
    if (e>maior)
       maior=e;
    if (e<menor)
       menor=e;
       
       printf ("O maior numero e: %d\n",maior);
       printf ("O menor numero e: %d\n",menor);
       system ("pause");
       getch ();
}

//============================================================//

void cap4_j ()
{
 int x;
    printf ("Verificar se um numero e impar ou par\n\n\n");
    printf ("Informe X\n");
    scanf ("%d",&x);
    if (x%2==0)
       printf ("Numero eh par\n");
    else
        printf ("Numero eh impar\n");
     system ("pause"); 
     getch ();    
}

//============================================================//

void cap4_k ()
{
    int x;
    printf ("Veriricar se o valor esta dentro da faixa permitida\n\n\n");
    printf ("Inform um valor para X\n");
    scanf ("%d",&x);
    if (x>=1 && x<=9)
       printf ("O valor esta na faixa permitida\n");
    else
        printf ("O valor esta fora da faixa permitida\n");
    system ("pause");
    getch ();
}

//============================================================//

void cap4_l ()
{
     int x;
    printf ("Verificar se o numero informado eh menor que 3:\n\n\n");
    printf ("Informe um valor:\n");
    scanf ("%d",&x);
    if (x<3)
    {
       printf ("%d\n",x);
       system ("pause");
     }
    else
    printf ("Numero maior que 3\n");
    system ("pause");
    getch ();
}

//============================================================//

void cap4_m ()
{
     char nome[100];
   char sexo;
   printf ("Verificar se e Homem ou Mulher, e apresentar sexo e comprimento formal\n\n\n");
   printf ("Informe o seu nome\n");
   fflush(stdin);
    scanf("%[0-9a-zA-Z,. ]",&nome);
   printf ("Informe seu sexo\n");
    scanf ("\n %c",&sexo);
   
   if (sexo == 'm'|| sexo == 'M' )
   {
     printf ("Ilmo.Sr\n");
     printf ("%s\n\n",nome);
     system ("pause");
    }
   else
       if (sexo =='f' || sexo == 'F' )
       { 
         printf ("Ilmo.Sra\n");
         printf ("%s\n\n",nome);
         system ("pause");
         }
        else
        {
            printf ("Sexo Informado Invalido\n");
            system ("pause");
          }
          getch ();
}

//============================================================//

void cap4_n ()
{
     int s,a,b,c;
    printf ("Verificar se o valor indicado em S e maior ou igual a 100\n\n");
    printf ("Informe o valor para A,B e C:\n");
    scanf ("%d %d %d",&a,&b,&c);
    s=a+b+c;
    if (s>=100)
       printf ("O valor eh: %d\n",s);
    system ("pause");
    getch ();
}


//================================== fim das questoes do cap 4 =============================///


//================================== Inicio das questoes do cap 5 ================================///

void cap5_a ()
{
int x,i;
    
    printf ("Quadrado dos numeros inteiros entre 15 e 200\n\n\n");
   for (i=15; i<=200; ++i)
   {
       x=i*i;
       printf ("%d*%d = %d\n",i,i,x); 
    }
       system ("pause");
       getch ();
}

//============================================================//

void cap5_b ()
{
int x,i,y;
    
    printf ("Tabuada de um numero\n");
    printf ("Informe um numero");
    scanf ("%d",&y);
    
    for (i=1; i<=9 ; ++i)
    {
        x=y+i;
        printf ("%d + %d = %d\n",y,i,x);
     }
        for (i=y; i<=9 ; ++i)
          {
            x=i-y;
            printf ("              %d - %d = %d\n",i,y,x);
           }
         
          for (i=1; i<=10 ; ++i)
          {
            x=y*i;
            printf ("                           %d * %d = %d\n",y,i,x);
           }
             for (i=y; i<=10 ; ++i)
            {
                x=i/y;
                printf ("                                         %d / %d = %d\n",i,y,x);
             }
            system ("pause");
            getch ();
}

//============================================================//

void cap5_c ()
{
     int inic,fim,r;
    
    printf ("Somatorio de 0 a 100:\n\n");
    r=0;
    fim=100;
      for (inic=0; inic<=100;++inic)
      {
          r=r+inic;
       }
      printf ("A soma eh: %d \n",r);
      system ("pause");
      getch ();
}

//============================================================//

void cap5_d ()
{
int x,cont;
    x=0;
    printf ("A soma dos numeros pares entre 0 e 500 : \n\n\n");
    
    for (cont=0;cont<=500;++cont)
    {
         if (cont%2==0)
         x=x+cont;
     }
      printf ("A soma dos numeros pares eh: %d\n",x);
      system ("pause");
      getch ();
}

//============================================================//

void cap5_e ()
{
int i,x;
    for (i=0;i<=20;++i)
    {
        if(i%2!=0)
        printf ("Os valores impares de 0 a 20 sao: %d\n",i);
     }
    system ("pause");
    getch ();
}

//============================================================//

void cap5_f ()
{
     int i;
     printf ("Numeros divisiveis por 4 entre a e 200: \n\n\n");
    for (i=0;i<=200;++i)
    {
        if (i%4==0)
        printf ("O numero %d, eh divisivel por 4 e menor que 200\n",i);
     }
    system ("pause");
    getch ();
}

//============================================================//

void cap5_g ()
{
  int pot,i,x,y,j;
  printf ("Potencia de base 3 ate o indice 20: \n\n\n");
  x=3;
  pot=1;
  y=1;
    for (i=1;i<=20;++i)
    {
       printf("3^%d = %.0f\n",i, pow(3,i));
     }
       system ("pause");
       getch ();
}

//============================================================//

void cap5_h ()
{    
    int x,y,i,r;
    printf ("Calcular a potencia de um numero informado: \n\n\n");
    printf ("Informe a base:\n");
    scanf ("%d",&x);
    printf ("Informe o expoente:\n");
    scanf ("%d",&y);
    i=0; 
     while (i<y)
     {
       r=pow(x,y);
      ++i;
      }
       printf ("Resultado: %d\n",r);
 system ("pause");
 getch ();
}

//============================================================//

void cap5_i ()
{
     int velho,velho2,novo,i;
    printf ("Sequencia de Fibonacci\n");
    velho2=1;
    velho=1;
    for (i=0;i<=15;++i)
    {
        novo=velho+velho2;
        printf ("Sequencia: %d\n",novo);
        velho2=velho;
        velho=novo;
     }
     system ("pause");
     getch ();
}

//============================================================//

void cap5_j ()
{ 
    float f;
    int i;
    printf ("Conversao de Celsius em Farenheit: \n\n\n");
    
    for (i=0;i<=100;++i)
    {
        f=(9*i+160)/5;
        printf ("%d Graus Celsisus Equivale a %.2f\n Fanrenheit",i,f);
        i=i+9;
     }
     system ("pause");
     getch ();
}

//============================================================//

void cap5_k ()
{
    float grao,soma;
   int i;
   printf ("Numeros de grao de trigo que se pode obter em um tabulero de xadrez \n\n\n");
   
   grao=2;
   soma=i;
   for (i=2;i<=64;++i)
   {
       soma=soma+grao;
       grao=grao*2;
   } 
    printf ("Soma eh: %.2f\n",soma);
    system ("pause");
    getch (); 
}

//============================================================//

void cap5_l ()
{
   int i,fat;
    fat=1;
    printf ("Somatorio de fatorial dos valores de 1 a 15: \n\n\n");
    
    for (i=1;i<=15;++i)
    {
    fat=fat+i;
     }
    printf ("O somatorio eh: %i\n",fat);
    system ("pause");
    getch ();  
}

//============================================================//

void cap5_m ()
{
    float num,media,soma;
    int i;
    soma=0;
    printf ("Somatorio e a media dos valores lidos : \n\n\n");
    for (i=1;i<=10;++i)
    {
        printf ("Informe o %d numero: ",i);
        scanf ("%f",&num);
        soma=soma+num;     
     }
      media=soma/10;
      printf ("media :%.2f\n",media);
      printf ("soma: %.0f\n",soma);
      system ("pause");
      getch ();
}

//============================================================//

void cap5_n ()
{
      int soma,num,i;
  float media;
  printf ("Ler valores positivos ate que seja informado um valor negativo \n\n\n");
  i=1;
  soma=0;
  while (true)
  {
        printf ("Informe um valor: ");
        scanf ("%d",&num);
        if (num<0)
        {
         break;
        }
         else
        soma=num+soma;
        i=i+1;   
   }
    media=(soma/i);
    
    printf ("\n A media eh: %.2f\n",media);
    printf ("A quantidade de numeros informados eh: %d\n",i-1);
    printf ("A soma eh: %d\n",soma);
    system ("pause");
    getch ();
}

//============================================================//

void cap5_o ()
{
    int cont,fat;
    cont=1;
    fat=1;
    while (cont<=5)
    {
          fat=cont*2-1;
          cont=cont+1;
          printf ("Fatorial de valores impares de 1 a 10 eh: %d\n",fat);
     }
     system ("pause");
     getch (); 
}

//============================================================//

void cap5_p ()
{
     int par,cont;
    float soma,media;
    printf ("Soma e media dos valores pares entre 50 e 70: \n\n\n");
    soma=1;
    cont=50;
    while (cont<=70)
    {
          if (cont%2==0)
          {
             par=par+cont;
             soma=soma+cont;
          }
         cont=cont+1;   
    }  
    media=soma/cont;
    printf ("soma: %.2f\n",soma);
    printf ("media: %.2f\n",media);
    system ("pause");
}

//============================================================//

void cap5_q ()
{
     char nomeC[50],conti;
    float larg,comp,area=0,total=0;
    
    printf ("Area de uma residencia: \n\n\n");
    conti='s';
    while (conti == 's')
    {
       printf ("Informe o comodo: ");
        scanf ("%s",&nomeC);
       printf ("Informe a Largura: ");
        scanf ("%f",&larg);
       printf ("Informe o Comprimento: ");
        scanf ("%f",&comp);
        
        area=(larg*comp);
        total=total+area;
        
        printf ("A area do(a) %s eh de %.0f\n",nomeC,area);
        printf ("Voce deseja continuar no programa ? S/N ");
        scanf ("%s",&conti);
        if (conti == 'n')
        {
          printf ("O tamanho da casa eh: %.0f\n",total);
          break;
        }         
     }
    system ("pause");
    getch ();
}

//============================================================//

void cap5_r ()
{
      int x,maior=0,menor=0;
   x=1;
   printf ("Ler valores inteiros ate que um negativo seja informado: \n\n\n");
   
   while (x>=0)
   {
     scanf ("%d",&x);
     menor=x;
     if (maior<menor)
     maior=menor; 
   }
    printf ("O maior eh: %d\n",maior);
    printf ("O menor eh: %d\n",menor);
    system ("pause");
    getch ();
}

//============================================================//


void cap5_s ()
{
    int div,divisor,quoc,resto;
    printf ("Resultado inteiro da divisao de dois numeros inteiros; \n\n\n");
    
    printf ("Escreva o dividendo e o divisor: ");
    scanf ("%d %d",&div,&divisor);
    resto=0;
    quoc=0;
    resto=div;
    while (resto>=divisor)
    {
          resto=resto-divisor;
          quoc=quoc+1;
    }     
    printf ("%d : %d = %d \n resto= %d\n",div,divisor,quoc,resto);
    system ("pause");
    getch ();
}

//========================== fim das questoes do capitulo 5 ==============================//




//========================== inicio das questoes do capitulo 6 ==============================//

void cap6_a ()
{
     char a[20][30];
      int i;
      
      printf ("Ler 10 nomes e apresenta-los\n\n\n");
      for (i=0;i<10;++i)
      {
          printf ("Insira um nome: ");
          scanf ("%s",&a[i]);
       }
       for (i=0;i<10;++i)
       {
        printf ("%s\n",a[i]);
        }
        system ("pause");
        getch ();
}


void cap6_b ()
{
     int i,a[9],b[9];
    printf ("Multiplicar os valores da matriz A por 3 e apresentar a matriz B: \n\n\n");
    
    for (i=1;i<=8;++i)
    {
        printf ("Informe 8 valores para a Matriz A: ");
        scanf ("%d",&a[i]);
        b[i]=a[i]*3;  
     }
     for (i=1;i<=8;++i)
     {
         printf ("Matriz B: %d\n",b[i]);
     }
     system ("pause");
     getch ();
}

//============================================================//

void cap6_c ()
{
     float a[21],b[21],c[21];
    int i;
    
    printf ("Subtracao dos elementos da matriz A com B: \n\n\n");
    for (i=1;i<=20;++i)
    {
        printf ("Informe 20 numeros para a Matriz A: ");
        scanf ("%f",&a[i]);
    }
    system ("cls");
    for (i=1;i<=20;++i)
    {
        printf ("Informe 20 numeros para a Matriz B: ");
        scanf ("%f",&b[i]);
        c[i]=a[i]-b[i];
    }
    system ("cls");
    for (i=1;i<=20;++i)
    {
     printf ("Valor da Matriz C: %.2f\n",c[i]);
     }
     system ("pause");
     getch ();
}

//============================================================//

void cap6_d ()
{
     int i,a[16],b[16],c[17];
    printf ("Elementos da matriz B deve ser o quadrado dos elementos da Matriz A\n\n\n");
    for (i=1;i<=15;++i)
    {
        printf ("Informe 15 numeros: ");
        scanf ("%d",&a[i]);
        b[i]=(a[i]*a[i]);
     }
    system ("cls");
    for (i=1;i<=15;++i)
    {
        printf ("Matriz A [%d]            Matriz B [%d]\n",a[i],b[i]);
    }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_e ()
{
     int i,fat,a[16],b[16],c[16];
    
    printf ("Elementos da Matriz B deve ser o fatorial da Matriz A: \n\n\n");
    for (i=1;i<=15;++i)
    {
        printf ("Informe 15 numeros: ");
        scanf ("%d",&a[i]);
    }
    system ("cls");
    for (i=1;i<=15;++i)
    {
        b[i]=1;
        for (fat=1;fat<a[i];++fat)
        {
            b[i]=b[i]*fat;
         }
    }
    for (i=1;i<=15;++i)
    {
        printf ("Matriz A [%d]             Matriz B [%d]\n",a[i],b[i]);
    }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_f ()
{
     int i,a[16],c[31],b[31];
    
    printf ("Juntar os elementos da Matriz A e B em C: \n\n\n");
    for (i=1;i<=15;++i)
    {
        printf ("Informe 16 digitos da Matriz A: ");
        scanf ("%d",&a[i]);
        c[i]=a[i];
    }
    system ("cls");
    for (i=16;i<=30;++i)
    {
        printf ("Informe 15 digitos da Matriz B: ");
        scanf ("%d",&b[i]);
        c[i]=b[i];
    }
    system ("cls");
    for (i=1;i<=30;++i)
    {
        printf ("Matriz C [%d]\n",c[i]);
    }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_g ()
{
    char i,a[21][100],b[51][100],c[51][100];
    
    printf ("Juntar os elementos de A e B em C: (nomes): \n\n\n");
    for (i=1;i<=20;++i)
    {
        printf ("Informe 15 digitos da Matriz A: ");
        gets (a[i]);
        strcpy (c[i],a[i]);
    }
    system ("cls");
    for (i=21;i<=50;++i)
    {
        printf ("Informe 15 digitos da Matiz B: ");
        gets (b[i]);
        strcpy (c[i],b[i]);
    }
    system ("cls");
    for (i=1;i<=50;++i)
    {
        printf ("Matriz C %s \n",c[i]);
    }
    system ("pause");
    getch (); 
}

//============================================================//

void cap6_h ()
{
     int i,a[21],b[21];
     printf ("Inverter os elementos de A em B: \n\n\n");
    
    for (i=1;i<=20;++i)
    {
        printf ("Informe 20 digitos: ");
        scanf ("%d",&a[i]);
        b[i]=a[i];
    }
    system ("cls");
    for (i=20;i>=1;i--)
    {
        printf ("Matriz B [%d]\n",b[i]);
    }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_i ()
{
     float a[6],b[11],c[16],d[16];
    int i;
    printf ("Juntar os elementos de A,B,C em D: \n\n\n");
    
    for (i=1;i<=5;++i)
    {
        printf ("Informe 5 numeros da Matriz A: ");
        scanf ("%f",&a[i]);
        d[i]=a[i];
    }
    system ("cls");
    for (i=6;i<=10;++i)
    {
        printf ("Informe 5 numeros da Matriz B: ");
        scanf ("%f",&b[i]);
        d[i]=b[i];
    }
    system ("cls");
    for (i=11;i<=15;++i)
    {
        printf ("Informe 5 numeros da Matriz C: ");
        scanf ("%f",&c[i]);
        d[i]=c[i];
    }
    system ("cls");
    for (i=1;i<=15;++i)
    {
        printf ("Matriz D [%.2f]\n",d[i]);
    }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_j ()
{
     int x,j,i,a[21],b[21];
    
    printf ("Cada elementos de B o Somatorios dos elementos em relacao a matriz A: \n\n\n");
    for (i=1;i<=20;++i)
    {
        system ("cls");
        printf ("Qtde digitadas %d \n",i-1);
        printf ("Informe 20 numeros: ");
        scanf ("%d",&a[i]);
        x=0;
            for (j=1;j<=a[i];++j)
            {
                x=x+j;
                b[i]=x;
            }
    }
            for (i=1;i<=20;++i)
            {
                printf ("Matriz B [%d]\n",b[i]);
            }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_k ()
{
     int a[11],b[11],i;
    
    printf ("Elementos de B devem ter seus valores negativos em relacao a A: \n\n\n");
    for (i=1;i<=10;++i)
    {
        printf ("Informe dez numeros: ");
        scanf ("%d",&a[i]);
        b[i]=(a[i]*(-1));
    }
    for (i=1;i<=10;++i)
    {
        printf ("Matriz B [%d]\n",b[i]);
    }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_l ()
{
     float a[11],b[11];
    int i;
    
    printf ("Divisao exata da Matriz A por 2: \n\n\n");
    for (i=1;i<=10;++i)
    {
        printf ("Informe os numeros da Matriz A: ");
        scanf ("%f",&a[i]);
     }
     for (i=1;i<=10;++i)
     {
         b[i]=(a[i]/2);
     }
    for (i=1;i<=10;++i)
    {
        printf ("(div Exata) Matriz B: %.2f\n",b[i]);
     }
system ("pause");
getch ();
}

//============================================================//

void cap6_m ()
{
    int i,x,a[11];
    
    printf ("Tabuada de * \n\n\n");
    printf ("");
    printf ("Informe o valor da sua tabuada: ");
    scanf ("%d",&x);
    for (i=1;i<=10;++i)
    {
     a[i]=x*i;
    }
    printf ("Tabuada de %d eh:\n",x);
    for (i=1;i<=10;++i)
     {
      printf ("%dx%d = %d\n",x,i,a[i]);
     }
    system ("pause");
    getch (); 
}

//============================================================//

void cap6_n ()
{
     float menor,maior,media,a[21];
    int x,i;
    printf ("Maior e menor temperaturas: \n\n\n");
    for (i=1;i<=20;++i)
    {
        printf ("Informe a temperatura: ");
        scanf ("%f",&a[i]);
    }
    maior=1;
    menor=1;
            for (i=1;i<=20;++i)
            {
                if (a[i]>maior)
                {
                maior=a[i];
                }
                else
                if (a[i]<menor)
                menor=a[i];
            }
            system ("cls");
    media=(maior+menor)/2;
    
    printf ("O maior valor informado eh: %.2f\n",maior);
    printf ("O menor valor informado eh: %.2f\n",menor);
    printf ("Media eh: %.2f\n",media);
    system ("pause");
    getch ();
}

//============================================================//

void cap6_o ()
{
 float a[26],b[26];
    int i;
    printf ("Converter Celsius em Farenheit: A-->B \n\n\n");
    
    for (i=1;i<=25;++i)
    {
        printf ("Informe as temperaturas em Celsius: ");
        scanf ("%f",&a[i]);
        b[i]=(9*a[i]+160)/5;
    }
    for (i=1;i<=25;++i)
    {
        printf ("A conversao para Farenheit: %.2f\n",b[i]);
    }
    system ("pause");
    getch ();    
}

//============================================================//

void cap6_p ()
{
     int a[13],b[13],i;
    
    printf ("Todo elemento da matriz A que for impar deve ser multiplicado por 2, caso contrario permancea constante\n\n\n");
    for (i=1;i<=12;++i)
    {
        printf ("Informe os numeros: ");
        scanf ("%d",&a[i]);
        if (a[i]%2==1)
         b[i]=a[i]*2;
        else
         b[i]=a[i];
    }
    for (i=1;i<=12;++i)
    {
        printf ("Matriz B [%d]\n",b[i]);
    }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_q ()
{
     int i,a[16];
    float b[16];
    printf ("Caso par divide, caso impar multiplique: \n\n\n");
    for (i=1;i<=15;++i)
    {
        printf ("Informe os numeros: ");
        scanf ("%d",&a[i]);
        if (a[i]%2==0)
         b[i]=a[i]/2;
        else
         b[i]=a[i]*1.5;
    }
        for (i=1;i<=15;++i)
        {
            printf ("Matriz B [%.2f]\n",b[i]);
        }
    system ("pause");
    getch ();
}

//============================================================//

void cap6_r ()
{
     int i,a[7],b[7],c[7],d[7];
    printf ("Matriz C elementos impar de A e B, Matriz D elementos par de A e B : \n\n\no");
    for (i=1;i<=6;++i)
    {
        a[i]=0;
        b[i]=0;
        c[i]=0;
        d[i]=0;
    }
    
    for (i=1;i<=6;++i)
    {
        system ("cls");
        printf ("Informe os numeros da Matriz A: ");
        scanf ("%d",&a[i]);
        if (a[i]%2==1)
         c[i]=a[i];
        else
          d[i]=a[i];
      }
           for (i=1;i<=6;++i)
           {
               system ("cls");
               printf ("Informe os numeros da Matriz B: ");
               scanf ("%d",&b[i]);
                if (b[i]%2==1)
                 c[i]=b[i];
                else
                 d[i]=a[i];
            }
            system ("cls");
           for (i=1;i<=6;++i)
           {
               printf ("Matriz C [%d]\n",c[i]);
               
            }
            printf ("\n\n");
             for (i=1;i<=6;++i)
             {
                 printf ("Matriz D [%d]\n",d[i]);
             }
 system ("pause");
 getch ();
}

//============================================================//

void cap6_s ()
{
 int i,a[7],b[7],c[13];
    
    printf ("A so aceita par e B so aceita impar: \n\n\n");
    for (i=1;i<=6;++i)
    {
       system ("cls");
        printf ("Informe 6 valores para a Matriz A: \n");
      do
      {
        printf ("Informe 6 valores: \n");
         scanf ("%d",&a[i]);
         }while ((a[i]%2)!=0);
     }
      for (i=1;i<=6;++i)
      {
          system ("cls");
           printf ("Informe 6 valores para a Matriz B: \n");
            do{
                printf ("Informe 6 valores: ");
                scanf ("%d",&b[i]);
            }while ((b[i]%2)!=0);
       }
       for (i=1;i<=6;++i)
       {
           c[i]=a[i];
           c[i+6]=b[i];
       }
    system ("cls");
    for (i=1;i<=12;++i)
    {
        printf ("Matriz C: %d\n",c[i]);
    }
    system ("pause");
    getch ();    
}

//============================================================//

void cap6_t ()
{
 int i,a[11],b[11],c[21];
   
   printf ("A so aceita divisiveis de 2 e 3, B so aceita divisiveis de 5: \n\n\n");
   for (i=1;i<=10;++i)
   {
       system ("cls");
       printf ("Digite 10 valores para a matriz A e B: \n");
       printf ("Qtde digitadas: %d\n",i-1);
       do{
          printf ("Matriz A Divisiveis por 2 e 3: ");
          scanf ("%d",&a[i]);
       }while (a[i]%2!=0 || a[i]%3!=0);
       do{
          printf ("Matriz B Multiplo de 5: ");
          scanf ("%d",&b[i]);
       }while((b[i]%5)!=0);
     }
       for (i=1;i<=10;++i)
       {
           c[i]=a[i];
           c[i+10]=b[i];
       }
           printf ("Matriz C: ");
           for (i=1;i<=20;++i)
           {
               
               printf ("%d\n",c[i]);
           }
   system ("pause");
   getch ();    
}

//============================================================//

void cap6_u ()
{
     int i,a[13],b[13],c[25];
   printf ("A so aceita divisiveis de 2 ou 3, B so aceita nao divisiveis de 5: \n\n\n");
   for (i=1;i<=12;++i)
   {
     do{
      system ("cls");
      printf ("Qtde digitados: %d\n\n",i-1);
       printf ("Digite um numero para a Matriz A: ");
        scanf ("%d",&a[i]);
        c[i]=a[i];
     }while (a[i]%2!=0 || a[i]%3!=0);
   }
   for (i=1;i<=12;++i)
   {
     do{
       system ("cls");
        printf ("Qtde digitados: %d\n\n",i-1);
         printf ("Digite um numero para a Matriz B: ");
          scanf ("%d",&b[i]);
          c[i+12]=b[i];
       }while (b[i]%5!=0);
    }
    system ("cls");
  for (i=1;i<=24;++i)
  {
    printf ("= Matriz C [%d]\n\n",a[i]);
    } 
system ("pause");
getch ();
}

//============================================================//

void cap6_v ()
{
   int x,y,i,a[31];
  printf ("Qtde de valores pares e impares da Matriz: \n\n\n"); 
  x=0;
  y=0;
  for (i=1;i<=30;++i)
  {
      system ("cls");
      printf ("Informe 30 digitos para a Matriz: ");
      scanf ("%d",&a[i]);
      
      if (a[i]%2==0)
      x=x+1;
      else
      if (a[i]%2==1)
      y=y+1;
  }
  printf ("Qtde de numeros pares: %d\n",x);
  printf ("Qtde de numeros impares: %d\n",y);
  system ("pause");
  getch ();   
}

//============================================================//

void cap6_w ()
{
    int i,a[11],b[11],c[11];
   printf ("Quadrado da soma de dois termos de A e B : \n\n\n");
   
   for (i=1;i<=10;++i)
   {
       system ("cls");
        printf ("Qtde digitados %d\n\n",i-1);
         printf ("Informe o valor da Matriz A: ");
          scanf ("%d",&a[i]);
           printf ("Informe o valor da Matriz B: ");
            scanf ("%d",&b[i]);
       c[i]=(a[i]*a[i])+2*a[i]*b[i]+(b[i]*b[i]);
    }
   for (i=1;i<=10;++i)
   {
       printf ("Matriz C [%d]\n",c[i]);
   }
    
system ("pause");
getch (); 
}

//============================================================//

void cap6_x()
{
     int i,ii,ip;
  float a[7],b[7];
  
  printf ("Alinhar par com impar : \n\n\n");
  ii=1;
  ip=2;
  
  for (i=1;i<=6;++i)
  {
      system ("cls");
      printf ("Qtde digitadas: %d\n\n",i-1);
      printf ("Digite 6 valores para a Matriz A: ");
      scanf ("%f",&a[i]);
      
      if ((i%2)==0)
      {
        b[ip]=a[i];
        ip=ip+2;
       }
       if ((i%2)>0)
       {
         b[ii]=a[i];
         ii=ii+2;
        }      
  }
  system ("cls");
  for (i=1;i<=6;++i)
  {
  printf ("Matriz A: %.2f     Matriz B: %.2f\n",a[i],b[i]);
   } 
system ("pause");
getch ();
}

//============================================================//

void cap6_y ()
{
    int i,x,a[16];
    printf ("Apresentar o total de elementos pares na Matriz: \n\n\n");
    x=0;
    for (i=1;i<=16;++i)
    {
        system ("cls");
         printf ("Qtde digitados %d\n\n",i-1);
         printf ("Informe 10 numeros: ");
           scanf ("%d",&a[i]);
        if (a[i]%2==0)
        x=x+1;
    }
    system ("cls");
    printf ("Qtde de numeros pares: %d\n",x);
    
system ("pause");
getch (); 
}

//============================================================//

void cap6_z ()
{
   float t,x;
   int i,a[11];
   printf ("Apresentar o total de elementos impares e seu percentual em relacao aos intens da matriz: \n\n\n");
   x=0;
   for (i=1;i<=10;++i)
   {
       system ("cls");
       printf ("Qtde digitados %d\n\n",i-1);
        printf ("Inform 10 numeros: \n");
         scanf ("%d",&a[i]);
       if ((a[i]%2)!=0)
       x=x+1;
    }
   t=(x/10)*100;
   printf ("Percentual de numeros impares:%.2f %%\n",t);
   printf ("Qtde de numeros impares: %.0f\n\n\n",x);
    
system ("pause");
getch ();  
}

//======================== fim das questoes do cap 6 ====================================//


//======================== inicio das questoes do cap 8 ====================================//


void cap8_a ()
{
     int i,j,ma[6][4],mb[6][4],mc[6][4];
    
    printf ("Soma de duas matrizes: \n\n\n ");
    for (i=1;i<=5;++i)
    {
        for (j=1;j<=3;++j)
        {
         printf ("Matriz A: ");
         printf ("Insira os valores para a Matriz A: ");
         scanf ("%d",&ma[i][j]);
        }
    }
   system ("cls");
    for (i=1;i<=5;++i)
    {
        for (j=1;j<=3;++j)
        {
            printf ("Matriz B: ");
            printf ("Insira os valores para a matriz B: ");
            scanf ("%d",&mb[i][j]);
         }
     }
     for (i=1;i<=5;++i)
     {
         for (j=1;j<=3;++j)
         {
             mc[i][j]=ma[i][j]+mb[i][j];
          }
      }
      for (i=1;i<=5;++i)
      {
          for (j=1;j<=3;++j)
          {
              printf ("Soma das matriz A e B: %d\n",mc[i][j]);
           }
       } 
    
system ("pause");
getch ();
}

//============================================================//

void cap8_b ()
{
     int i,j,ma[11],mb[11],mc[11][2];
    
    printf ("Valores de  A e B em C: \n\n\n");
    for (i=1;i<=10;++i)
    {
        printf ("Insira os valores para a Matriz A: ");
        scanf ("%d",&ma[i]);
     }
     for (i=1;i<=10;++i)
     {
         printf ("Insira os valores para a Matriz B: ");
         scanf ("%d",&mb[i]);
     }
     for (i=1;i<=10;++i)
     {
         for (j=1;i<=1;++i)
         {
             mc[i][j]=ma[i];
          }
      }
      for (i=1;i<=10;++i)
      {
          for (j=2;j<=2;++j)
          {
              mc[i][j]=mb[i];
           }
       }
       for (i=1;i<=10;++i)
       {
           for (j=1;j<=1;j++)
           {
           printf ("Os valores da Matriz A em C sao: %d\n",mc[i][j]);
            }
       }
       for (i=1;i<=10;++i)
       {
           for (j=2;j<=2;j++)
           {
           printf ("Os valores da Matriz B em C sao: %d\n",mc[i][j]);
            }
       }
    
system ("pause");
getch ();
}

//============================================================//

void cap8_c ()
{
     int i,j,ma[5][5];
    
    printf ("Ler a matriz e apresentar seus valores: \n\n\n");
    for (i=1;i<=4;++i)
    {
        for (j=1;j<=5;++j)
        {
            printf ("Insira os valores para a Matriz: ");
            scanf ("%d",&ma[i][j]);
         }
     }
     system ("cls");
     for (i=1;i<=4;++i)
     {
         for (j=1;j<=5;++j)
         {
             printf ("Valores inseridos na Matriz: %d\n",ma[i][j]);
          }
      }
    
system ("pause");
getch ();
}

//============================================================//

void cap8_d ()
{
     int ma[11],i,j,cont;
    int mc[11][3];
    
    printf ("Primeira coluna Soma, segunda potenciacao, terceira potencia de 2: \n\n\n");
    for (i=1;i<=10;++i)
    {
        printf ("Insira os valores para a Matriz A: ");
        scanf ("%d",&ma[i]);
     }
    
     for (i=1;i<=10;++i)
     {
         for (j=1;j<=1;++j)
         {
             mc[i][j]=ma[i]+5;
          }
      }
    
      for (i=1;i<=10;++i)
      {
          for (j=2;j<=2;++j)
          {
              mc[i][j]=1;
              for (cont=1;cont<=ma[i];++cont)
              {
                  mc[i][j]=mc[i][j]*cont;
               }
          }
       }
    
          for (i=1;i<=10;++i)
          {
              for (j=3;j<=3;++j)
              {
                  mc[i][j]=ma[i]*ma[i];
               }
           }
           for (i=1;i<=10;++i)
           {
               for (j=1;j<=1;++j)
               {
                   printf ("Resultado da Matriz C:(Soma) %d\n",mc[i][j]);
               }
           }
           for (i=1;i<=10;++i)
           {
               for (j=2;j<=2;++j)
               {
                   printf ("Resultado da Matriz C:(potenciacao) %d\n",mc[i][j]);
               }
           }
           for (i=1;i<=10;++i)
           {
               for (j=3;j<=3;++j)
               {
                   printf ("Resultado da Matriz C:(potencia de 2) %d\n",mc[i][j]);
               }
           }
    
system ("pause");
getch ();
}

//============================================================//

void cap8_e ()
{
   int i,j,ma[13],mb[13],mc[13][2];
   
   printf ("Primeira coluna multiplica por 2 , segunda subtrai por 5: \n\n\n"); 
    for (i=1;i<=12;++i)
    {
     printf ("Insira o valor para a Matriz A: ");
     scanf ("%d",&ma[i]);
    }
     system ("cls");
     for (i=1;i<=12;++i)
     {
      printf ("Insira o valor para a Matriz B: ");
      scanf ("%d",&mb[i]);
     }
      
      for (i=1;i<=12;++i)
      {
       for (j=1;j<=1;++j)
       {
        mc[i][j]=ma[i]*2;
       }
      }
      
      for (i=1;i<=12;++i)
      {
       for (j=2;j<=2;++j)
       {
        mc[i][j]=mb[i]-5;
       }
      }
      
      for (i=1;i<=12;++i)
      {
       for (j=1;j<=1;++j)
       {
        printf ("(Mult por 2) Matriz C: %d\n",mc[i][j]);
       }
      }
      
      for (i=1;i<=12;++i)
      {
       for (j=2;j<=2;++j)
       {
        printf ("(Sub por 5) Matriz C: %d\n",mc[i][j]);
       }
      }
      
    
system ("pause");
getch ();  
}

//============================================================//

void cap8_f ()
{
     int i,j,fat,ma[6][4],mc[6][4];
    printf ("Fatorial de cada elemento correspondete a matriz A: \n\n\n");
    for (i=1;i<=5;++i)
    {
      for (j=1;j<=4;++j)
      {
       printf ("Informe os  valores para a Matriz A: ");
       scanf ("%d",&ma[i][j]);
      }
    }
    
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=4;++j)
     {
      mc[i][j]=1;
      for (fat=1;fat<=ma[i][j];++fat)
      {
       mc[i][j] *= fat;
      }
     }
    }
    system ("cls");
    for (i=1;i<=5;++i)
    {
       for (j=1;j<=4;++j)
       {
        printf ("Matria A: %d      Matriz C (fat): %d\n",ma[i][j],mc[i][j]);
       } 
    }
system ("pause");
getch ();
}

//============================================================//

void cap8_g ()
{
    float ma[5][5],mb[5][5];
    int i,j;
    
    printf ("Converter Celsius em Farenheit (matriz)");
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Informe a temperatura em Celcius: ");
      scanf ("%f",&ma[i][j]);
      mb[i][j]=(9*ma[i][j]/5)+32;
     }
    }
    
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Temperatura em Celsius: %.2f       Temperatura em Fahrenheit: %.2f\n",ma[i][j],mb[i][j]);
     }
    }
    
    
system ("pause");
getch ();
}

//============================================================//

void cap8_h ()
{
    int i,j,ma[6][5],mb[6][5];
    
    printf ("Elementos em B devem ser o dobro de A: execessoes b[1,1] b[2,2] b[3,3] b[4,4] b[5,5]");
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Informe os valores da matriz A: ");
      scanf ("%d",&ma[i][j]);
     }
    }
    
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=5;++j)
     {
      if (i==j)
      mb[i][j]=ma[i][j]*3;
      else
      mb[i][j]=ma[i][j]*2;
     }
    }
    
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Resultado Matriz B: %d \n",mb[i][j]);
     }
    }
    
    
system ("pause");
getch (); 
}

//============================================================//

void cap8_i ()
{
     int soma,fat,i,j,ma[8][7],mb[8][7];
    
    for (i=1;i<=7;++i)
    {
     for (j=1;j<=7;++j)
     {
      printf ("Informe os valores da matriz A: ");
      scanf ("%d",&ma[i][j]);
     }
    }
    
    for (i=1;i<=7;++i)
    {
     for (j=1;j<=7;++j)
     {
      mb[i][j]=1;
     }
    }
    
    for (i=1;i<=7;++i)
    {
     for (j=1;j<=7;++j)
     {
      if (i==j)
      {
       for (fat=1;fat<=ma[i][j];++fat)
         {
          mb[i][j] *= fat;
         }
      }
      else
      {
         for (soma=1;soma<ma[i][j];++soma)
        {
         mb[i][j] +=  soma;
        }
      }
     }
    }
    system ("cls");
    for (i=1;i<=7;++i)
    {
     for (j=1;j<=7;++j)
     {
        if (i==j)
         printf ("Rsultando da fatorial matriz B: %d\n",mb[i][j]);
         else
      printf ("Resultado Matriz B: %d \n",mb[i][j]);
     }
    }
    
    
system ("pause");
getch ();
}

//============================================================//

void cap8_j ()
{
     int ma[7][5],mb[7][5],i,j;
    
    printf ("Para cada elemento par soma 5, para impar subtrai 4: \n\n\n");
    for (i=1;i<=6;++i)
    {
      for (j=1;j<=5;++j)
      {
       printf ("Informe os valores da Matriz :");
       scanf ("%d",&ma[i][j]);   
      }
    }
    
    for (i=1;i<=6;++i)
    {
      for (j=1;j<=5;++j)
      {
        if (ma[i][j]%2==0)
        {
          mb[i][j]= ma[i][j]+5;
        }
         else
         {
          mb[i][j]= ma[i][j] -4;
         }                   
      }  
    }
    system ("cls");
    for (i=1;i<=6;++i)
    {
      for (j=1;j<=5;++j)
      {
       printf ("Matriz A: %d              Matriz B: %d\n", ma[i][j],mb[i][j]);  
      }
    }
    
system ("pause");
getch ();
}

//============================================================//

void cap8_k ()
{
    int ma[5][4],i,j,soma=0;
    
    printf ("Somatorios dos elementos da diagonal Prin. \n\n\n");
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=4;++j)
     {
       printf ("Informe os valores da matriz :");
       scanf ("%d",&ma[i][j]);
     }   
    }
    
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=4;++j)
     {
      if (i==j)
      soma=soma+ma[i][j];
     }
    }
    system ("cls");
    printf ("Somatorio dos valores eh: %d\n",soma);
    
    
system ("pause");
getch (); 
}

//============================================================//

void cap8_l ()
{
     int ma[16][15],i,j,soma;
    
    printf ("Soma dos elementos pares na diagonal principal : \n\n\n");
    for (i=1;i<=15;++i)
    {
     for (j=1;j<=15;++j)
     {
      printf ("Informe os valores da Matriz : ");
      scanf ("%d",&ma[i][j]);   
     }
    }
    soma=0;
    
    for (i=1;i<=15;++i)
    {
     for (j=1;j<=15;++j)
     {
      if (i==j)
      {
       soma=soma+ma[i][j];
      }   
     }
    }
    system ("cls");
    
   printf ("O Somatorio eh: %d",soma);
    
    
system ("pause");
getch ();
}

//============================================================//

void cap8_m ()
{
     int ma[6][5],i,j,soma;
    
    printf ("Somatorio de a[1,1] a[3,3] a[5,5]");
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Informe os valores da Matriz :");
      scanf ("%d",&ma[i][j]);   
     }
    }
    soma=0;
    
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=5;++j)
     {
      if (i==j)
      {
       soma=soma+ma[i][j];
      }   
     }
    }
    system ("cls");
    
   printf ("O Somatorio eh: %d\n",soma);
system ("pause");
getch ();
}

//============================================================//

void cap8_n ()
{
      int ma[8][7],i,j,par;
    
    printf ("Total de elementos pares da matriz: \n\n\n");
    for (i=1;i<=7;++i)
    {
     for (j=1;j<=7;j++)
     {
      printf ("Informe os valores para a Matriz: ");
      scanf ("%d",&ma[i][j]);
     }
    }
    par=0;
    for (i=1;i<=7;++i)
    {
     for (j=1;j<=7;++j)
     {
      if (ma[i][j]%2==0)
      par=par+1;
     }
    }
    
    printf ("Os valores pares na Matriz Sao : %d\n",par);
system ("pause");
getch ();
}

//============================================================//

void cap8_o ()
{
     int mb[9],ma[9][6],i,j,soma;
    
    printf ("Somatorio das linhas de B cujo B e a soma de cada linha de A: \n\n\n");
    for (i=1;i<=8;++i)
    {
     for (j=1;j<=6;++j)
     {
      printf ("Digite os valores da Matriz: ");
      scanf ("%d",&ma[i][j]);
     }
    }
    
    for (i=1;i<=8;++i)
    {
     mb[i]=0;
    }
    
    for (i=1;i<=8;++i)
    {
     for (j=1;j<=6;++j)
     {
      mb[i]=mb[i]+ma[i][j];
     }
    }
   
   soma=0; 
    for (i=1;i<=8;++i)
    {
     soma=mb[i]+soma;
    }
    
    printf ("O somatorio eh: %d",soma);
    
system ("pause");
getch ();
}

//============================================================//

void cap8_p ()
{
    int ma[11][7],i,j;
    float par,impar,ppar,pimpar;
    
    printf ("Total de elementos par e impar e seus percentuais: \n\n\n");
    for (i=1;i<=10;++i)
    {
     for (j=1;j<=7;++j)
     {
      printf ("Informe os valores para a Matriz :");
      scanf ("%d",&ma[i][j]);
     }
    }
    
    par=0;
    impar=0;
    
    for (i=1;i<=10;++i)
    {
     for (j=1;j<=7;++j)
     {
      if (ma[i][j]%2==0)
       par=par+1;
       else
       impar=impar+1;
     }
    }
    
    system ("cls");
    ppar=(par/70)*100;
    pimpar=(impar/70)*100;
    
    printf ("Valores Par e seu percentual: %.0f , %.2f%% \n\n",par,ppar);
    printf ("Valores impar e seu percentual: %.0f , %.2f%% \n\n",impar,pimpar);
    
system ("pause");
getch (); 
}

//============================================================//

void cap8_q ()
{
     int ma[5][5],mb[5],mc[6],total,i,j;
    
    printf ("B somatio de cada linha de A: C somatorio de cada coluna de A: \n\n\n");
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Informe 20 valores para a Matriz A: ");
      scanf ("%d",&ma[i][j]);
     }
    }
    
    for (i=1;i<=4;++i)
    {
    mb[i]=0;
     for (j=1;j<=5;++j)
     {
      mb[i]+=ma[i][j];
     }
    }
    
    for (i=1;i<=5;++i)
    {
    mc[i]=0;
    }
    
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=1;++j)
     {
      mc[j]+=ma[i][j];
     }
    }
    
    for (i=1;i<=4;++i)
    {
     for (j=2;j<=2;++j)
     {
      mc[j]+=ma[i][j];
     }
    }
    
    for (i=1;i<=4;++i)
    {
     for (j=3;j<=3;++j)
     {
      mc[j]+=ma[i][j];
     }
    }
    
    for (i=1;i<=4;++i)
    {
     for (j=4;j<=4;++j)
     {
      mc[j]+=ma[i][j];
     }
    }
    
    for (i=1;i<=4;++i)
    {
     for (j=5;j<=5;++j)
     {
      mc[j]+=ma[i][j];
     }
    }  
 total=0;
    
 total = mb[1]+mb[2]+mb[3]+mb[4]+mc[1]+mc[2]+mc[3]+mc[4]+mc[5];
 printf ("Total da soma da matriz B e C: %d\n",total);
    
system ("pause");
getch ();
}

//============================================================//

void cap8_r ()
{
    int ma[5],mb[5],mc[5],md[5],me[5][4],i,j,fat;
    
    printf ("O dobro, o triplo, o quadruplo, utima linha fatorial: \n\n\n");
    for (i=1;i<=4;++i)
    {
        system ("cls");
        printf ("Informe um valor para Matriz A: ");
        scanf ("%d",&ma[i]);
        printf ("Informe um valor para Matriz B: ");
        scanf ("%d",&mb[i]);
        printf ("Informe um valor para Matriz C: ");
        scanf ("%d",&mc[i]);
        printf ("Informe um valor para Matriz D: ");
        scanf ("%d",&md[i]);
    }
    
    for (i=1;i<=1;++i)
    {
     for (j=1;j<=4;++j)
     {
      me[i][j]=ma[i]*2;
     }
    }
    
    for (i=2;i<=2;++i)
    {
     for (j=1;j<=4;++j)
     {
      me[i][j]=mb[i]*3;
     }
    }
    
    for (i=3;i<=3;++i)
    {
     for (j=1;j<=4;++j)
     {
      me[i][j]=mc[i]*4;
     }
    }
    
    for (i=4;i<=4;++i)
    {
     for (j=1;j<=4;++j)
     {
      me[i][j]=1;
      for (fat=1;fat<=md[i];fat++)
      {
       me[i][j]=me[i][j]*fat;
      }
     }
    }
    
    for (i=1;i<=4;i++)
    {
     for (j=1;j<=4;j++)
     {
      printf ("Matriz E: %d\n",me[i][j]);
     }   
    }
    
system ("pause");
getch ();
}

//============================================================//

void cap8_s ()
{
     int ma[6][6],mb[6][6],mc[6][6],i,j=1;
    
    printf ("A aceita par e B aceita impar: soma de A + B: \n\n\n");
    for (i=1;i<=5;++i)
    {
     j=1;
     while (j<=6)
     {
      printf ("Insira um valor Par para a Matriz A: ");
      scanf ("%d",&ma[i][j]);
      if (ma[i][j]%2==0)
       j=j+1;
      else
      printf ("O numero nao e par:\n\n");
     }
    }
    system ("cls");
    
    for (i=1;i<=5;++i)
    {
     j=1;
     while (j<=6)
     {
      printf ("Insira um valor impar para a Matriz B: ");
      scanf ("%d",&mb[i][j]);
      if (mb[i][j]%2==1)
      {
       mc[i][j]=ma[i][j]+mb[i][j];
       j=j+1;
       }
      else
      printf ("O numero nao e impar:\n\n");
     }
    }
    
    system ("cls");
    
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=6;++j)
     {
      printf ("Matriz C : %d\n",mc[i][j]);
     }   
    }
    
system ("pause");
getch ();
}

//============================================================//

void cap8_t ()
{
     int ma[5][5],mb[5][5],mc[5][5],i,j=1;
    
    printf ("A divisiveis por 3 e 4, B divisiveis por 5 ou 6: C subtração de A - oB: \n\n\n");
    for (i=1;i<=4;++i)
    {
     j=1;
     while (j<=5)
     {
      printf ("Insira um valor divisivel por 3 e 4 para a Matriz A: ");
      scanf ("%d",&ma[i][j]);
      if ((ma[i][j]%3==0) && (ma[i][j]%4==0))
       j=j+1;
      else
      printf ("O numero nao e divisivel por 3 e 4:\n\n");
     }
    }
    system ("cls");
    
    for (i=1;i<=4;++i)
    {
     j=1;
     while (j<=5)
     {
      printf ("Insira um valor divisivel por 5 ou 6 para a Matriz B: ");
      scanf ("%d",&mb[i][j]);
      if ((mb[i][j]%5==0) || (mb[i][j]%6==0))
      {
       mc[i][j]=ma[i][j]-mb[i][j];
       j=j+1;
       }
      else
      printf ("O numero nao e divisivel por 5 ou 6:\n\n");
     }
    }
    
    system ("cls");
    
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Matriz C : %d\n",mc[i][j]);
     }   
    }
    
    
system ("pause");
getch ();
}

//============================================================//

void cap8_u ()
{
      int ma[5][5],mb[5][5],mc[5][5],i,j=1;
    
    printf ("A divisiveis por 3 ou 4, B divisiveis por 5 e 6: C multiplicacao de A * B: \n\n\n");
    for (i=1;i<=4;++i)
    {
     j=1;
     while (j<=5)
     {
      printf ("Insira um valor divisivel por 3 ou 4 para a Matriz A: ");
      scanf ("%d",&ma[i][j]);
      if ((ma[i][j]%3==0) || (ma[i][j]%4==0))
       j=j+1;
      else
      printf ("O numero nao e divisivel por 3 ou 4:\n\n");
     }
    }
    system ("cls");
    
    for (i=1;i<=4;++i)
    {
     j=1;
     while (j<=5)
     {
      printf ("Insira um valor divisivel por 5 e 6 para a Matriz B: ");
      scanf ("%d",&mb[i][j]);
      if ((mb[i][j]%5==0) && (mb[i][j]%6==0))
      {
       mc[i][j]=ma[i][j]*mb[i][j];
       j=j+1;
       }
      else
      printf ("O numero nao e divisivel por 5 e 6:\n\n");
     }
    }
    
    system ("cls");
    
    for (i=1;i<=4;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Matriz C : %d\n",mc[i][j]);
     }   
    }
    
    
system ("pause");
getch ();
}

//============================================================//

void cap8_v ()
{
     int ma[6][5],mb[6][5],mc[6][5],i,j=1;
    
    printf ("A nao divisiveis por 3 B nao divisiveis por 6: C soma de A + B: \n\n\n");
    for (i=1;i<=5;++i)
    {
     j=1;
     while (j<=5)
     {
      printf ("Insira um valor nao divisivel por 3 para a Matriz A: ");
      scanf ("%d",&ma[i][j]);
      if (ma[i][j]%3==0)
      {
       printf ("O numero e divisivel por 3:\n\n");
       j=j+1;
       }
      else
      j=j+1;
     }
    }
    system ("cls");
    
    for (i=1;i<=5;++i)
    {
     j=1;
     while (j<=5)
     {
      printf ("Insira um valor nao divisivel por 6 para a Matriz B: ");
      scanf ("%d",&mb[i][j]);
      if (mb[i][j]%6==0)
      {
       printf ("O numero e divisivel por 6:\n\n");
       }
      else
      mc[i][j]=ma[i][j]+mb[i][j];
       j=j+1;
     }
    }
    
    system ("cls");
    
    for (i=1;i<=5;++i)
    {
     for (j=1;j<=5;++j)
     {
      printf ("Matriz C : %d\n",mc[i][j]);
     }   
    }
    
    
system ("pause");
getch ();
}

//============================= fim das questoes do capitulo 8 ==============================//


// ============================== Inicio das questoes do capitulo 9 ==========================////

//====== Meu registro =======///
struct agenda 
       {
        char nome[50],endereco[50],telefone[16];
       };
       
struct agenda ficha[11];

// ========= // ==============///


int cadastro ()
{
 int i;
     printf ("Ficha de cadastro: \n\n");
     fflush(stdin);
    for (i=1;i<=10;++i)
    {
     printf("Informe o %d nome: ",i);
     gets(ficha[i].nome);
     printf("Informe um endereco: ");
     gets(ficha[i].endereco);
     printf("Informe um telefone: ");
     gets(ficha[i].telefone);
     system ("cls");
    }
    system("pause");
}

// ===================================================///


// ========== Função para pesquisar os registros ==========//

int pesquisa ()
{
    int i=1,achar=1;
    char compara[20];
    
    printf(" Pesquisar Cadastros  \n\n");
    fflush(stdin);
    printf("Informe um Nome: ");
    gets(compara);
    
    for (i=1;i<=10;++i)
    {
     if (strcmp(ficha[i].nome,compara)==0)
     {
      achar=0;
      break;
     }
     else
     achar=1;     
    }
    if (achar==0)
    {
      puts (ficha[i].nome);
      puts (ficha[i].endereco);
      puts (ficha[i]. telefone); 
    }
      else
      {
       printf ("Cadastro nao encontrado: \n\n");  
      }
      system ("pause");
      getch ();   
}

// ========================================================///



// ============= Função para listar os registros cap9 1:d ========= //

int apresentar ()
{
    int i;
    for (i=1;i<=10;++i)
    {
     printf ("Ficha de Cadastros: \n\n");
     puts (ficha[i].nome);
     puts (ficha[i].endereco);
     puts (ficha[i]. telefone);
     printf ("\n\n");
    }
    system ("pause");
    getch ();
}


/// ===================== sub menu cap 4 ========================= ///
void cap4 ()
{
     char opcao=1;
     while (opcao!=0)
     {
     
     printf ("======================================================================");
     printf ("                                            Capitulo 4: \n");
     printf ("                          Escolha a opcao desejada:\n\n\n");
     printf ("                                a - questao A\n");
     printf ("                                b - questao B\n");
     printf ("                                c - questao C\n");
     printf ("                                d - questao D\n");
     printf ("                                e - questao E\n");
     printf ("                                f - questao F\n");
     printf ("                                g - questao G\n");
     printf ("                                h - questao H\n");
     printf ("                                i - questao I\n");
     printf ("                                j - questao J\n");
     printf ("                                k - questao K\n");
     printf ("                                l - questao L\n");
     printf ("                                m - questao M\n");
     printf ("                                n - questao N\n\n");
     printf ("\t\t\t     0 - Retornar ao Menu\n");
     scanf ("%c",&opcao);
     system ("cls");
    
    // ======================== condicoes do sub-menu =================//
     
     switch (opcao)
     {
     case 'a':
     cap4_a();
     break;
     
     case 'b':
     cap4_b();
     break;
     
     case 'c':
     cap4_c();
     break;
     
     case 'd':
     cap4_d();
     break;
     
     case 'e':
     cap4_e();
     break;
     
     case 'f':
     cap4_f();
     break;
     
     case 'g':
     cap4_g();
     break;
     
     case 'h':
     cap4_h();
     break;
     
     case 'i':
     cap4_i();
     break;
     
     case 'j':
     cap4_j();
     break;
     
     case 'k':
     cap4_k();
     break;
     
     case 'l':
     cap4_l();
     break;
     
     case 'm':
     cap4_m();
     break;
     
     case 'n':
     cap4_n();
     break;     

     case 'z':
     return;
     break;     

     case '0':
     return;
     break;
     }
  }
}

//=============================== sub menu cap 5 ===============================//

void cap5 ()
{
     char opcao=1;
     while (opcao!=0)
     {
     
     printf ("\n");
     printf ("\t\t\t\tCapitulo 5 : \n");
     printf ("\t\t =======================================\n\n");
     printf ("\t\t\t  Escolha a opcao desejada:\n");
     printf ("                             a - questao A\n");
     printf ("                             b - questao B\n");
     printf ("                             c - questao C\n");
     printf ("                             d - questao D\n");
     printf ("                             e - questao E\n");
     printf ("                             f - questao F\n");
     printf ("                             g - questao G\n");
     printf ("                             h - questao H\n");
     printf ("                             i - questao I\n");
     printf ("                             j - questao J\n");
     printf ("                             k - questao K\n");
     printf ("                             l - questao L\n");
     printf ("                             m - questao M\n");
     printf ("                             n - questao N\n\n");
     printf ("\t\t\t 0 - Retornar oa Menu\n");
     scanf ("%c",&opcao);
     system ("cls");
    
    // ======================== condicoes do sub-menu =================//
     
     switch (opcao)
     {
     case 'a':
     cap5_a();
     break;
     
     case 'b':
     cap5_b();
     break;
     
     case 'c':
     cap5_c();
     break;
     
     case 'd':
     cap5_d();
     break;
     
     case 'e':
     cap5_e();
     break;
     
     case 'f':
     cap5_f();
     break;
     
     case 'g':
     cap5_g();
     break;
     
     case 'h':
     cap5_h();
     break;
     
     case 'i':
     cap5_i();
     break;
     
     case 'j':
     cap5_j();
     break;
     
     case 'k':
     cap5_k();
     break;
     
     case 'l':
     cap5_l();
     break;
     
     case 'm':
     cap5_m();
     break;
     
     case 'n':
     cap5_n();
     break;
     
     case 'o':
     cap5_o();
     break;
     
     case 'p':
     cap5_p();
     break;
     
     case 'q':
     cap5_q();
     break;
     
     case 'r':
     cap5_r();
     break;
     
     case 's':
     cap5_s();
     break;
     
     case '0':
     return;
     break;
     
     }
  }
}

// =================================== Sub menu capitulo 6 ==================================== ///

void cap6 ()
{
     char opcao=1;
     while (opcao!=0)
     {
     
     printf ("\n");
     printf ("\t\t\t\tCapitulo 6 : \n");
     printf ("\t\t =======================================\n\n");
     printf ("\t\t\t  Escolha a opcao desejada:\n");
     printf ("                 a - questao A            n - questao N\n");
     printf ("                 b - questao B            o - questao O\n");
     printf ("                 c - questao C            p - questao P\n");
     printf ("                 d - questao D            q - questao Q\n");
     printf ("                 e - questao E            r - questao R\n");
     printf ("                 f - questao F            s - questao S\n");
     printf ("                 g - questao G            t - questao T\n");
     printf ("                 h - questao H            u - questao U\n");
     printf ("                 i - questao I            v - questao V\n");
     printf ("                 j - questao J            w - questao W\n");
     printf ("                 k - questao K            x - questao X\n");
     printf ("                 l - questao L            y - questao Y\n");
     printf ("                 m - questao M            z - questao Z\n\n");
     printf ("\t\t\t 0 - Retornar ao Menu\n\n");
     
     scanf ("%c",&opcao);
     system ("cls");
    
    // ======================== condicoes do sub-menu =================//
     
     switch (opcao)
     {
     case 'a':
     cap6_a();
     break;
     
     case 'b':
     cap6_b();
     break;
     
     case 'c':
     cap6_c();
     break;
     
     case 'd':
     cap6_d();
     break;
     
     case 'e':
     cap6_e();
     break;
     
     case 'f':
     cap6_f();
     break;
     
     case 'g':
     cap6_g();
     break;
     
     case 'h':
     cap6_h();
     break;
     
     case 'i':
     cap6_i();
     break;
     
     case 'j':
     cap6_j();
     break;
     
     case 'k':
     cap6_k();
     break;
     
     case 'l':
     cap6_l();
     break;
     
     case 'm':
     cap6_m();
     break;
     
     case 'n':
     cap6_n();
     break;
     
     case 'o':
     cap6_o();
     break;
     
     case 'p':
     cap6_p();
     break;
     
     case 'q':
     cap6_q();
     break;
     
     case 'r':
     cap6_r();
     break;
     
     case 's':
     cap6_s();
     break;
     
     case 't':
     cap6_t();
     break;
     
     case 'u':
     cap6_u();
     break;
     
     case 'v':
     cap6_v();
     break;
     
     case 'w':
     cap6_w();
     break;
     
     case 'x':
     cap6_x();
     break;
     
     case 'y':
     cap6_y();
     break;
     
     case 'z':
     cap6_z();
     break;
     
     case '0':
     return;
     break;
    }
  }
}


// =================================== Sub menu capitulo 8 ==================================== ///

void cap8 ()
{
     char opcao=1;
     while (opcao!=0)
     {
     
     printf ("\n");
     printf ("\t\t\t\tCapitulo 8 : \n");
     printf ("\t\t =======================================\n\n");
     printf ("\t\t\t  Escolha a opcao desejada:\n");
     printf ("                 a - questao A            l - questao L\n");
     printf ("                 b - questao B            m - questao M\n");
     printf ("                 c - questao C            n - questao N\n");
     printf ("                 d - questao D            o - questao O\n");
     printf ("                 e - questao E            p - questao P\n");
     printf ("                 f - questao F            q - questao Q\n");
     printf ("                 g - questao G            r - questao R\n");
     printf ("                 h - questao H            s - questao S\n");
     printf ("                 i - questao I            t - questao T\n");
     printf ("                 j - questao J            u - questao U\n");
     printf ("                 k - questao K            v - questao V\n");
     printf ("                 k - questao K            v - questao V\n\n\n");
     printf ("\t\t\t  0 - Retornar ao Menu\n");
     
     scanf ("%c",&opcao);
     system ("cls");
    
    // ======================== condicoes do sub-menu =================//
     
     switch (opcao)
     {
     case 'a':
     cap8_a();
     break;
     
     case 'b':
     cap8_b();
     break;
     
     case 'c':
     cap8_c();
     break;
     
     case 'd':
     cap8_d();
     break;
     
     case 'e':
     cap8_e();
     break;
     
     case 'f':
     cap8_f();
     break;
     
     case 'g':
     cap8_g();
     break;
     
     case 'h':
     cap8_h();
     break;
     
     case 'i':
     cap8_i();
     break;
     
     case 'j':
     cap8_j();
     break;
     
     case 'k':
     cap8_k();
     break;
     
     case 'l':
     cap8_l();
     break;
     
     case 'm':
     cap8_m();
     break;
     
     case 'n':
     cap8_n();
     break;
     
     case 'o':
     cap8_o();
     break;
     
     case 'p':
     cap8_p();
     break;
     
     case 'q':
     cap8_q();
     break;
     
     case 'r':
     cap8_r();
     break;
     
     case 's':
     cap8_s();
     break;
     
     case 't':
     cap8_t();
     break;
     
     case 'u':
     cap8_u();
     break;
     
     case 'v':
     cap8_v();
     break;
     
     case '0':
     return;
     break; 
      
     }
  }
}

// ====================  Sub menu capitulo 9 =========================////

void cap9a ()
{
  int opcao=1;
  while (opcao!=0)
 {
   system ("cls");  
   printf ("\n\t\t                 Registro         \n\n");
   printf ("\t\t=================================================\n");
   printf ("\t\t* 1: Cadastrar                                 *\n");
   printf ("\t\t* 2: Pesquisar                                 *\n");
   printf ("\t\t* 3: Apresentar Lista de Cadastro              *\n");
   printf ("\t\t* 0: Retorna ao Menu                           *\n");
   printf ("\t\t================================================\n\t\t");
   
     scanf("%d",&opcao);
     system("cls");
     switch(opcao)
     {
       case 1:
       cadastro ();
       break;
       
       case 2:
       pesquisa ();
       break;
       
       case 3:
       apresentar ();
       break;
       
       case 0:
       return;
       break;  
     }
}
}




// ========================== Menu capitulo 9 ===========================================///

void cap9 ()
{
    char opcao=1;
     while (opcao!=0)
     {
     
     printf ("\n\n\n");
     printf ("                                    Capitulo 9 : \n");
     printf ("\t\t\t================================\n");
     printf ("\t\t\t     Escolha a opcao desejada:\n\n");
     printf (" \t                A - questao A       B - questao B\n\n\n");
     printf ("\t\t\t\t0 - Menu Principal\n\n");
     
     scanf ("%c",&opcao);
     system ("cls"); 

     switch (opcao)
     {
      case 'a':
      cap9a();
      break;
       
      case '0':
      return;
      break;
      }
     }
}
// ============================================================================= //


// ============================= Menu principal =========================//

int main ()
{    
    system ("");
    int opcao=1;
    while (opcao!=0)
    {
          opcao=1;
     printf ("\n\n\n");
     printf ("                      Menu: Escolha 1 das opcoes\n\n");
     printf ("                            1 - Capitulo 4\n\n");
     printf ("                            2 - Capitulo 5\n\n");
     printf ("                            3 - Capitulo 6\n\n");
     printf ("                            4 - Capitulo 8\n\n");
     printf ("                            5 - Capitulo 9\n\n");
     printf ("                            0 - Sair \n\n");
     scanf ("%d",&opcao);
     system ("cls");
     
     switch (opcao)
     {
      case 1:
      cap4();
      break;
      
      case 2:
      cap5 ();
      break;
      
      case 3:
      cap6 ();
      break;
      
      case 4:
      cap8 ();
      break;
      
      case 5:
      cap9 ();
      break;
      
      case 0:
      break;
      
      
      default:
      printf("\nOpcao Invalida!\n");
      break;
      
     }
    }
}
