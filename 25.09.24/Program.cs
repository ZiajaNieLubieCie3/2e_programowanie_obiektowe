using System;
using System.Numerics;
namespace program;

class Program
{
    public static void Main(string[] arg)
    {
        Console.WriteLine("Witaj, Swieie!"); //zadanie 1

        string Imie = Console.ReadLine(); // zadanie 2
        Console.WriteLine("Czesc " + Imie);

        Console.WriteLine("Podaj pierwsza liczbe"); // zadanie 3
        string liczba1 = Console.ReadLine();
        Console.WriteLine("Podaj druga liczbe");
        string liczba2 = Console.ReadLine();

        int Liczba1Con = Convert.ToInt32(liczba1);
        int Liczba2Con = Convert.ToInt32(liczba2);

        int suma = Liczba1Con + Liczba2Con;
        Console.WriteLine(" Suma tych liczb to " + suma);

        Console.WriteLine("Podaj promien kola"); // zadanie 4
        double promien = Convert.ToDouble(Console.ReadLine());
        double pi = Math.PI;
        double pole = pi * (promien * promien);
        Console.WriteLine("Pole kola to " + pole);

        Console.WriteLine("Podaj stopnie celcjusza"); // zadanie 5
        double C = Convert.ToDouble(Console.ReadLine());
        double F = (C + 9 / 5) + 32;
        Console.WriteLine("Temperatura w farenheitcie to: " + F);

        Console.WriteLine("Podaj liczbe"); // zadanie 6
        int liczba = Convert.ToInt32(Console.ReadLine());
        string liczbaCon = Convert.ToString(liczba);
        Console.WriteLine(liczbaCon);

        Console.WriteLine("Podaj pierwsza liczbe"); // zadanie 7
        double liczba1 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("podaj druga liczbe");
        double liczba2 = Convert.ToDouble(Console.ReadLine());
        double srednia = (liczba1 + liczba2) / 2;
        Console.WriteLine("srednia tych liczb to " + srednia);

        Console.WriteLine("Podaj liczbe: "); // zadanie 8
        double liczba = Convert.ToDouble(Console.ReadLine());
        double kwadrat = liczba + liczba;
        Console.WriteLine("Kwadrat tej liczby to: " + kwadrat);

        Console.WriteLine("Podaj liczbe zmiennoprzecinkowa");
        double liczbaZmienna = Convert.ToDouble(Console.ReadLine());
        int liczbaCon = Convert.ToInt32(liczbaZmienna);
        Console.WriteLine("Przekonwertowana liczba to: " + liczbaCon);






    }

}
