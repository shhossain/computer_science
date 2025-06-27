import java.util.ArrayList;
import java.util.List;

class Book {
    private String title;
    private String author;
    private double price;

    public Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public void displayInfo() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.printf("Price: $%.2f%n%n", price);
    }

    public double getPrice() {
        return price;
    }
}

class Customer {
    private String name;
    private String email;

    public Customer(String name, String email) {
        this.name = name;
        this.email = email;
    }

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Email: " + email);
        System.out.println();
    }
}

class Order {
    private Customer customer;
    private List<Book> books;
    private double totalAmount;

    public Order(Customer customer) {
        this.customer = customer;
        this.books = new ArrayList<>();
        this.totalAmount = 0;
    }

    public void addBook(Book book) {
        books.add(book);
    }

    public void calculateTotal() {
        for (Book book : books) {
            totalAmount += book.getPrice();
        }
    }

    public void displayInfo() {
        System.out.println("Order Details:");
        customer.displayInfo();
        System.out.println("Books in the Order:");
        for (Book book : books) {
            book.displayInfo();
        }
        System.out.printf("Total Amount: $%.2f%n", totalAmount);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create customer
        Customer customer = new Customer("Alice", "alice@example.com");

        // Create books
        Book book1 = new Book("The Great Gatsby", "F. Scott Fitzgerald", 12.99);
        Book book2 = new Book("To Kill a Mockingbird", "Harper Lee", 9.99);

        // Create an order and add books
        Order order = new Order(customer);
        order.addBook(book1);
        order.addBook(book2);

        // Calculate and display the order
        order.calculateTotal();
        order.displayInfo();
    }
}
