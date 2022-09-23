package org.example;

import java.util.Scanner;

public class Professor extends Person implements UniversityMember {
    private int _id = 0, publications = 0;
    private static int professorID = 0;
    Scanner scanner = new Scanner(System.in);

    Professor() {
        _id = ++professorID;
    }

    @Override
    public void setData() {
        System.out.println("new Professor");
        try {
            System.out.print("Insert age: ");
            age = Integer.parseInt(scanner.nextLine());
        }catch (NumberFormatException e){
            e.printStackTrace();
        }

        System.out.print("Insert name: ");
        name = scanner.nextLine();

        try {
            System.out.print("Insert publications: ");
            publications = Integer.parseInt(scanner.nextLine());
        }catch (NumberFormatException e){
        e.printStackTrace();
    }
    }

    @Override
    public void getData() {
        System.out.println(_id + " Name:" + name + " Age:" + age + " Publications: " + publications);
    }
}
