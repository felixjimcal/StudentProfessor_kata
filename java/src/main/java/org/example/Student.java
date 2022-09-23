package org.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Student extends Person implements UniversityMember {

    private int _id = 0;
    private static int studentID = 0;
    private double sumGrades = 0, averageGrades = 0;
    private List<Double> grades = new ArrayList<Double>();
    Scanner scanner = new Scanner(System.in);

    Student() {
        _id = ++studentID;
    }

    @Override
    public void setData() {
        System.out.println("new Student");
        try {
            System.out.print("Insert age: ");
            age = Integer.parseInt(scanner.nextLine());
        } catch (NumberFormatException e) {
            e.printStackTrace();
        }

        System.out.print("Insert name: ");
        name = scanner.nextLine();

        int _totalGrades = 10;
        for (int i = 0; i < _totalGrades; i++) {
            try {
                System.out.print("Insert grade (" + i + "/" + _totalGrades + ")");
                double grade = Double.parseDouble(scanner.nextLine());
                grades.add(grade);
                sumGrades += grade;
            } catch (NumberFormatException e) {
                e.printStackTrace();
            }
        }
        averageGrades = sumGrades / grades.size();
    }

    @Override
    public void getData() {
        System.out.println(_id + " Name:" + name + " Age:" + age + " T.Grades: " + sumGrades + " Avr.Grades: " + averageGrades);
    }
}
