class Book:
    def __init__(self, title, author, price):
        self.title = title
        self.author = author
        self.price = price

    def display_info(self):
        print(f"Title: {self.title}")
        print(f"Author: {self.author}")
        print(f"Price: ${self.price:.2f}")
        print()

class Customer:
    def __init__(self, name, email):
        self.name = name
        self.email = email

    def display_info(self):
        print(f"Name: {self.name}")
        print(f"Email: {self.email}")
        print()

class Order:
    def __init__(self, customer):
        self.customer = customer
        self.books = []
        self.total_amount = 0

    def add_book(self, book):
        self.books.append(book)

    def calculate_total(self):
        for book in self.books:
            self.total_amount += book.price

    def display_info(self):
        print("Order Details:")
        self.customer.display_info()
        print("Books in the Order:")
        for book in self.books:
            book.display_info()
        print(f"Total Amount: ${self.total_amount:.2f}")

# Create customer
customer = Customer("Alice", "alice@example.com")

# Create books
book1 = Book("The Great Gatsby", "F. Scott Fitzgerald", 12.99)
book2 = Book("To Kill a Mockingbird", "Harper Lee", 9.99)

# Create an order and add books
order = Order(customer)
order.add_book(book1)
order.add_book(book2)

# Calculate and display the order
order.calculate_total()
order.display_info()
