package org.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese total miembros: ");
        int totalMembers = scanner.nextInt();

        List<UniversityMember> universityMembers = new ArrayList<UniversityMember>();

        for (int i = 0; i < totalMembers; i++) {
            System.out.print("Indicate member type (1-2): ");
            int memberType = scanner.nextInt();

            switch (memberType) {
                case 1:
                    universityMembers.add(new Professor());
                    break;
                case 2:
                    universityMembers.add(new Student());
                    break;
                default:
                    System.out.println("Incorrect type, try one more time");
                    i--;
                    break;
            }
            universityMembers.get(universityMembers.size() - 1).setData();
        }

        for (UniversityMember member : universityMembers) {
            member.getData();
            System.out.print("\n");
        }

    }
}