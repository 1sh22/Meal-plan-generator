# Meal Plan Generator

This is a simple web application that generates a weekly meal plan based on user input. The user provides information such as age, weight, height, gender, activity level, number of meals per day, diet preference, and any health specifications. The application then calculates the user's Basal Metabolic Rate (BMR) and uses it to determine the daily calorie intake, taking into account the activity level.

## How to Use

1. **Input Personal Information:**
   - Age: Enter your age.
   - Weight: Input your weight in kilograms.
   - Height: Enter your height in centimeters.
   - Gender: Select your gender (male/female).
   - Activity Level: Choose your activity level from the provided options.
   - Number of Meals: Specify how many meals you'd like per day.
   - Diet Preference: Choose your diet preference (e.g., vegetarian, vegan, etc.).
   - Health Specifications: Provide any health specifications you have.

2. **Generate Meal Plan:**
   - Click the "Generate Meal Plan" button to initiate the meal plan generation process.

3. **View Meal Plan:**
   - The generated meal plan will be displayed in a table format, organized by days of the week.
   - Each cell in the table contains meal information, including the meal name, image, and a link to view the recipe.

## How It Works

The application utilizes the Edamam API to fetch meal data based on the user's preferences. It calculates the required calorie intake and queries the API to retrieve a set number of meals for the week. The meal plan is then displayed in a user-friendly table.

## Dependencies

- [Edamam API](https://developer.edamam.com/edamam-recipe-api) - The application uses this API to fetch recipe data.

## Getting Started

To run the application locally, follow these steps:

1. Clone the repository to your local machine.
2. Open the `index.html` file in a web browser.
3. Fill out the meal form and click the "Generate Meal Plan" button.

## API Key

To use the Edamam API, you need to obtain an API key. Replace the placeholder values for `APP_ID` and `APP_KEY` in the JavaScript code with your actual API credentials.

```javascript
const APP_ID = "your_app_id";
const APP_KEY = "your_app_key";
```

## Notes

- The application is a basic example and may require additional features and improvements for production use.
- Ensure that your internet connection is active for proper API data retrieval.
