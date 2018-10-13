/******************************************************************************

Online C Compiler.
Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/******************************************************************************

Online C Compiler.
Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int
main ()
{
  int array[1000];
  int p1[2], p2[2], p3[2], p4[2], p5[2], p6[2], p7[2], p8[2], p9[2], p10[2];
  pipe (p1);
  pipe (p2);
  pipe (p3);
  pipe (p4);
  pipe (p5);
  pipe (p6);
  pipe (p7);
  pipe (p8);
  pipe (p9);
  pipe (p10);
  int sum = 0, increment = 1;
  for (int i = 0; i < 1000; i++)
    {
      array[i] = increment;
      increment++;
    }
  for (int i = 0; i < 1000; i++)
    {
      sum = sum + array[i];
    }
  int f1 = fork ();
  if (f1 == 0)
    {
      for (int i = 0; i < 100; i++)
	{
	  sum = sum + array[i];
	}
      write (p1[1], &sum, sizeof (sum));
      close (p1[1]);
      exit (0);
    }
  else
    {
      int f2 = fork ();
      if (f2 == 0)
	{
	  for (int i = 100; i < 200; i++)
	    {
	      sum = sum + array[i];
	    }
	  write (p2[1], &sum, sizeof (sum));
	  close (p2[1]);
	  exit (0);
	}
      else
	{
	  int f3 = fork ();
	  if (f3 == 0)
	    {
	      for (int i = 200; i < 300; i++)
		{
		  sum = sum + array[i];
		}
	      write (p3[1], &sum, sizeof (sum));
	      close (p3[1]);
	      exit (0);
	    }
	  else
	    {
	      int f4 = fork ();
	      if (f4 == 0)
		{
		  for (int i = 300; i < 400; i++)
		    {
		      sum = sum + array[i];
		    }
		  write (p4[1], &sum, sizeof (sum));
		  close (p4[1]);
		  exit (0);
		}
	      else
		{
		  int f5 = fork ();
		  if (f5 == 0)
		    {
		      for (int i = 400; i < 500; i++)
			{
			  sum = sum + array[i];
			}
		      write (p5[1], &sum, sizeof (sum));
		      close (p5[1]);
		      exit (0);
		    }
		  else
		    {
		      int f6 = fork ();
		      if (f6 == 0)
			{
			  for (int i = 500; i < 600; i++)
			    {
			      sum = sum + array[i];
			    }
			  write (p6[1], &sum, sizeof (sum));
			  close (p6[1]);
			  exit (0);
			}
		      else
			{
			  int f7 = fork ();
			  if (f7 == 0)
			    {
			      for (int i = 600; i < 700; i++)
				{
				  sum = sum + array[i];
				}
			      write (p7[1], &sum, sizeof (sum));
			      close (p7[1]);
			      exit (0);
			    }
			  else
			    {
			      int f8 = fork ();
			      if (f8 == 0)
				{
				  for (int i = 700; i < 800; i++)
				    {
				      sum = sum + array[i];
				    }
				  write (p8[1], &sum, sizeof (sum));
				  close (p8[1]);
				  exit (0);
				}
			      else
				{
				  int f9 = fork ();
				  if (f9 == 0)
				    {
				      for (int i = 800; i < 900; i++)
					{
					  sum = sum + array[i];
					}
				      write (p9[1], &sum, sizeof (sum));
				      close (p9[1]);
				      exit (0);
				    }
				  else
				    {
				      int f10 = fork ();
				      if (f10 == 0)
					{
					  for (int i = 900; i < 1000; i++)
					    {
					      sum = sum + array[i];
					    }
					  write (p10[1], &sum, sizeof (sum));
					  close (p10[1]);
					  exit (0);
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }


  int result = 0, total_result = 0;
  read (p1[0], &result, sizeof (int));
  close (p1[0]);
  total_result = total_result + result;
  read (p2[0], &result, sizeof (int));
  close (p2[0]);
  total_result = total_result + result;
  read (p3[0], &result, sizeof (int));
  close (p3[0]);
  total_result = total_result + result;
  read (p4[0], &result, sizeof (int));
  close (p4[0]);
  total_result = total_result + result;
  read (p5[0], &result, sizeof (int));
  close (p5[0]);
  total_result = total_result + result;
  read (p6[0], &result, sizeof (int));
  close (p6[0]);
  total_result = total_result + result;
  read (p7[0], &result, sizeof (int));
  close (p7[0]);
  total_result = total_result + result;
  read (p8[0], &result, sizeof (int));
  close (p8[0]);
  total_result = total_result + result;
  read (p9[0], &result, sizeof (int));
  close (p9[0]);
  total_result = total_result + result;
  read (p10[0], &result, sizeof (int));
  close (p10[0]);
  total_result = total_result + result;

  printf ("%d ", total_result);

  printf ("Hello World");

  return 0;
}
