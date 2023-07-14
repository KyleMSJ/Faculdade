int main()
{
   int vet[6];
   int i;
   for(i=0;i<6;i++)
   {
      vet[i]=i*2;
   }
   for(i=0;i<6;i=i+2)
   {
      printf("%d,", vet[i]);
   }
   for(i=5; i>0; i=i-2)
   {
      printf("%d,",vet[i]);
   }
}
