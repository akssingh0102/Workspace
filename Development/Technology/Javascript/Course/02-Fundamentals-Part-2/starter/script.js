"use strict";

// Arrow function - with one line body and single parameter
const calAge = (birthYear) => 2037 - birthYear;
console.log(calAge(2001));

// Arrow function - with multiline body and multiple parameters
const yearUntilRetirement = (birthYear, firstName) => {
  const age = 2037 - birthYear;
  const retirement = 65 - age;
  return `${firstName} retires in ${retirement} years.`;
};
console.log(yearUntilRetirement(2001, "Akash"));
