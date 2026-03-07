namespace ADET
{
    interface IPerson
    {
        string FirstName { get; set; }
        string LastName { get; set; }
        string MiddleName { get; set; }
        string Gender { get; set; }
    }

    public class Person : IPerson
    {
        private string _fname;
        public string FirstName
        {
            get { return _fname; }
            set { _fname = value; }
        }

        private string _lname;
        public string LastName
        {
            get { return _lname; }
            set { _lname = value; }
        }

        private string _mname;
        public string MiddleName
        {
            get { return _mname; }
            set { _mname = value; }
        }

        private string _gender;
        public string Gender
        {
            get { return _gender; }
            set { _gender = value; }
        }

        public Person(string Fname, string Lname, string Mname, string gender)
        {
            FirstName = Fname;
            LastName = Lname;
            MiddleName = Mname;
            Gender = gender;
        }

        public void GetProfile()
        {
            Console.WriteLine("First Name: " + FirstName);
            Console.WriteLine("Last Name: " + LastName);
            Console.WriteLine("Middle Name: " + MiddleName);
            Console.WriteLine("Gender: " + Gender);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Person person1 = new Person("Jose Ezra Nazarene", "Vergabera", "Barcelon", "Male");
            person1.GetProfile();
        }
    }
}