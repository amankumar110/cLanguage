struct note
{
    int d,m,y;
    char note[1000];
};

int counts=0;

struct note notes[1000];

void showNotes()
{
    if(counts!=0)
    {
      int i;
     for(i=0;i<counts;i++)
     {
         printf("%d/%d/%d - %s\n",notes[i].d,notes[i].m,notes[i].y,notes[i].note);
     }
    } else
    {
        printf("\nNo Notes to show");
    }

}

void makeNote()
{
    struct note message;
    printf("Enter date in DD/MM/YYYY format and note\n");
    scanf("%d/%d/%d %[^\n]%*c",&message.d,&message.m,&message.y,&message.note);
    notes[counts]=message;
    printf("\nNote saved\n");
    counts++;
}
void main()
{

  printf("Welcome to the Notes \npress 1 for viewing notes\npress 2 for creating notes\n");
    int ans;
  while(1)
  {

      scanf("%d",&ans);
      if(ans==1)
        showNotes();
      else if(ans==2)
        makeNote();
      else
        break;
  }
}
