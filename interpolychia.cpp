#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main(){
	
	
int size=0;
                      double x[MAX], y[MAX], xi, yi, yii, old_yi, next_yi, yi_min, xi_min; //ÈÇ̀ÅÍÅÍÈÅ 0 yi_min, xi_min;

                      FILE *f;
                      if((f=fopen(cString, "r"))==NULL){
                          printf("file is not found!\n");
                          exit(1);
                      }
                      while((fscanf(f,"%lf,%lf",&x[size],&y[size]))!=EOF && size < MAX){

                          size++;
                      }

                      {
                          gsl_interp_accel *acc
                                  = gsl_interp_accel_alloc ();
                          gsl_spline *spline
                                  = gsl_spline_alloc (gsl_interp_akima, size);
                          gsl_spline_init (spline, x, y, size);

                      xi_min = x[0];// ÈÇ̀ÅÍÅÍÈÅ 1
                          yi_min = gsl_spline_eval(spline, xi_min, acc);// ÈÇ̀ÅÍÅÍÈÅ 2

                          for (xi = x[0]; xi <= x[size - 1]; xi += 0.1){
                              if(xi == x[0]){
                                  yi = gsl_spline_eval (spline, xi, acc);
                              }
                              else{
                                  yi = next_yi;
                              }

                              if (yi < yi_min){ //ÈÇ̀ÅÍÅÍÈÅ 3
                                yi_min = yi;
                                xi_min = xi;
                              }

                               /* Èä¸́ íà÷èíàÿ ñ ïåđâîăî  ưëǻåị́à */
                              if(xi != x[0] && xi + 0.1 <= x[size - 2]){
                                  next_yi = gsl_spline_eval (spline, xi += 0.1, acc); // f(x + h)
                                  yii = (next_yi - 2 * yi + old_yi) / 0.01;
                                  //~ printf("%g\t%g\n", xi, yii);

                                  out << "xi:\t" << xi << "yi:\t" << yi << "\n";

                              }
                              old_yi = yi;
                          }
                          out << "yi_min:\t" << yi_min;
                          gsl_spline_free (spline);
                          gsl_interp_accel_free (acc);
                      }
           OutFile.close();
           
	   }
