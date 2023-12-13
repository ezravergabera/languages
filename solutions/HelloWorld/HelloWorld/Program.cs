namespace Program
{
    class Program
    {
        public class Person
        {
            public string Name;

            public void Introduce(string to)
            {
                Console.WriteLine("Hello {0}, my name is {1}.", to, Name);
            }

            public static Person Parse(string str)
            {
                var person = new Person();
                person.Name = str;

                return person;
            }
        }

        private static void Main(string[] args)
        {
            // C# classes
            // making use of instance member
            //var person = new Person();
            //person.Name = "Ezra";
            //person.Introduce("Mosh");

            // making use of static member
            var person = Person.Parse("Ezra");
            person.Introduce("Mosh");



            //// You can use var instead of data type keywords
            //byte number = 255;
            //int count = 10;
            //float totalPrice = 20.95f;
            //char character = 'a';
            //string firstName = "Ezra";
            //bool isWorking = true;

            //Console.Write(number);
            //Console.WriteLine(count);
            //Console.WriteLine(totalPrice);
            //Console.WriteLine(character);
            //Console.WriteLine(firstName);
            //Console.WriteLine(isWorking);

            //// Formatted strings
            //Console.WriteLine("{0} {1}", byte.MinValue, byte.MaxValue);
            //Console.WriteLine("{0} {1}", float.MinValue, float.MaxValue);

            //// Constant
            //const float Pi = 3.1415f;
            //Pi = 1;
        }

    }
}