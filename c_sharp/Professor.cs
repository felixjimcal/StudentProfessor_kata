using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_sharp
{
    class Professor : Person, UniversityMember
    {
        private int id, publications;
        private static int professorID;

        public Professor()
        {
            id = ++professorID;
        }

        public void getData()
        {
            Console.WriteLine(id + " Name: " + name + " Age: " + age + " Publications: " + publications);
        }

        public void setData()
        {
            Console.WriteLine("New Professor");
            Console.Write("Set name: ");
            name = Console.ReadLine();

            Console.WriteLine("\n");

            Console.Write("Set age: ");
            age = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("\n");

            Console.Write("Set publications: ");
            publications = Convert.ToInt32(Console.ReadLine());
        }
    }
}
