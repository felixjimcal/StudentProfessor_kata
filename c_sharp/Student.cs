using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_sharp
{
    class Student : Person, UniversityMember
    {
        private int id, totalDegrees = 10;
        private static int studentID;
        private double sumDegrees, averageDegrees;

        public Student()
        {
            id = ++studentID;
        }

        public void getData()
        {
            Console.WriteLine(id + " Name: " + name + " Age: " + age + " Sum Degrees: " + sumDegrees + "Avg.Degrees: " + averageDegrees);
        }

        public void setData()
        {
            Console.WriteLine("New Student");
            Console.Write("Set name: ");
            name = Console.ReadLine();

            Console.WriteLine("\n");

            Console.Write("Set age: ");
            age = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("\n");

            List<double> degrees = new List<double>();
            for (int i = 0; i < totalDegrees; i++)
            {
                Console.Write("Insert degree (" + i + " /" + totalDegrees + ")");
                double degree = Convert.ToDouble(Console.ReadLine());
                degrees.Add(degree);
                sumDegrees += degree;
            }
            averageDegrees = sumDegrees / degrees.Count;
        }
    }
}
