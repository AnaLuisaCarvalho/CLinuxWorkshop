set terminal png size 1000,1000
set output 'ParabolaPlot.png'

set xlabel 'x'
set ylabel 'y'
set title 'Parabola'

f(x) = a*x
fit f(x) 'parabola.dat' via a

plot 'parabola.dat', f(x)

