function calculateArea(length, width) {
  if (typeof length !== "number" || typeof width !== "number" || length <= 0 || width <= 0) {
    throw new Error("Both length and width must be positive numbers.");
  }

  return length * width;
}

const length = 5;
const width = 10;
const area = calculateArea(length, width);
console.log("The area of the rectangle is:", area);
