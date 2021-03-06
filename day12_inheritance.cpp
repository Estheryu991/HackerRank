class Student :  public Person{
	private:
		vector<int> testScores;  
	public:

        Student(string firstName, string lastName, int identification, vector<int> testScores)  : Person(firstName, lastName, identification)
        {
            this->testScores = testScores;
        }
        char calculate()
        {
            int sum = 0;
            int avg = 0;
            char grade = ' '; 
            for(size_t i = 0; i < testScores.size(); i++)
            {
                sum += testScores[i];
            }
            if(testScores.size() != 0)
                avg = sum/testScores.size();

            if(avg >=90 && avg <=100)
                grade = 'O';
            else if(avg >=80 && avg <90)
                grade = 'E';
            else if(avg >=70 && avg <80)
                grade = 'A';
            else if(avg >=55 && avg <70)
                grade = 'P';
            else if(avg >=40 && avg <55)
                grade = 'D';
            else if(avg <40)
                grade = 'T';

            return grade;
        }
};
