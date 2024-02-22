set terminal png size 1920, 1080
set title "Grafico di f(x)"
set output "img/f'.png"
set xlabel "x"
set ylabel "f'(x)"
set grid
plot "out1.dat" u 1:2 w l notitle
reset 