# APIs in Web Technology

## What is an API?

An API (Application Programming Interface) is a connection point 
between two pieces of software. It allows applications to 
communicate with each other by sending and receiving data.

In web development, APIs are commonly used to request data from 
a server and display it on a webpage — without the user needing 
to leave or reload the page.

A real-world analogy: think of an API like a waiter in a 
restaurant. You (the client) tell the waiter (the API) what you 
want. The waiter goes to the kitchen (the server), gets your 
food (the data), and brings it back to you.

---

## How Web APIs Work

Web APIs communicate using the **HTTP protocol** and follow a 
request-response cycle:

1. The client sends an **HTTP Request** to a URL (called an endpoint)
2. The server processes the request
3. The server sends back an **HTTP Response** (usually in JSON format)

### Common HTTP Methods

| Method | Purpose                        | Example                        |
|--------|-------------------------------|--------------------------------|
| GET    | Retrieve data from server     | Fetch a list of news articles  |
| POST   | Send new data to server       | Submit a form or create a user |
| PUT    | Update existing data          | Edit a user profile            |
| DELETE | Remove data from server       | Delete a post                  |

---

## JSON — The Language of APIs

Most APIs send data back in **JSON (JavaScript Object Notation)** 
format. JSON is lightweight and easy for JavaScript to work with.

```json
{
  "title": "Kenya Wins Gold",
  "category": "sports",
  "author": "Jane Doe",
  "published": true
}
```

JSON is made up of **key-value pairs** — similar to a JavaScript 
object. Keys are always strings in quotes, and values can be 
strings, numbers, booleans, arrays, or nested objects.

---

## The Fetch API

The Fetch API is built into modern browsers and allows JavaScript 
to make HTTP requests to external APIs.

### Basic Fetch Example

```javascript
fetch('https://api.example.com/news')
  .then(res => res.json())       // parse the response as JSON
  .then(data => {
    console.log(data)            // work with the data
  })
  .catch(err => {
    console.log('Error: ' + err) // handle any errors
  })
```

**Line by line:**
- `fetch(url)` — sends a GET request to the URL and returns a Promise
- `.then(res => res.json())` — converts the raw response into a 
  JavaScript object
- `.then(data => {...})` — runs once the data is ready; 
  this is where you use the data
- `.catch(err => {...})` — catches any network errors

---

## Real World Example — Fetching News Articles

The example below fetches Kenyan news articles from an API and 
displays them on a webpage:

```javascript
function getNews(category) {
  fetch(`https://api.worldnewsapi.com/search-news?language=en
         &source-country=ke&categories=${category}`)
    .then(res => res.json())
    .then(data => {
      if (!data.news) return

      let articles = data.news
      let mainArticle = articles[0]

      // Display the main article title on the page
      document.querySelector('h2').innerText = mainArticle.title

      // Display the main article image
      document.querySelector('img').src = 
        mainArticle.image || 'https://dummyimage.com/300'
    })
    .catch(err => console.log(err))
}

// Call the function with a category
getNews('sports')
```

---

## URL Structure of an API Request

API URLs often contain parameters that filter or customize the 
data returned:

```
https://api.worldnewsapi.com/search-news
  ?api-key=YOUR_KEY        ← authentication
  &language=en             ← filter by language
  &source-country=ke       ← filter by country (Kenya)
  &categories=sports       ← filter by category
```

The `?` starts the query string, and each parameter is separated 
by `&`.

---

## API Keys and Authentication

Many APIs require an **API key** — a unique identifier that:
- Identifies who is making the request
- Allows the provider to track and limit usage
- Prevents unauthorized access

API keys should be kept private and **never committed to a 
public GitHub repository**.

---

## Types of APIs

| Type       | Description                                        | Example                  |
|------------|----------------------------------------------------|--------------------------|
| REST       | Most common, uses HTTP methods                     | Twitter API, News API    |
| GraphQL    | Client specifies exactly what data it needs        | GitHub API v4            |
| WebSocket  | Real-time two-way communication                    | Chat apps, live scores   |
| Public API | Free to use, no authentication needed              | PokeAPI, Open Notify     |
| Private API| Requires authentication, often paid                | Stripe, Twilio           |

---

## Further Reading

- [MDN Fetch API Documentation](https://developer.mozilla.org/en-US/docs/Web/API/Fetch_API)
- [Public APIs List](https://github.com/public-apis/public-apis)
- [JSON Formatter Tool](https://jsonformatter.curiousconcept.com/)