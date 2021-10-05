/**
 * INTERVIEW QUESTION
 *
 * If You have given a function sum(1)(2)(3)(4)(5)...........(n)();
 * how can you invoke in javascript.
 *
 */

// So firs we will understand how this function call is work
/**
 * step 1: we have a sum function with one argument i.e 1. at first `sum(1)` will be
 * called and then return another function which will takes one argument as next value.
 *
 * Confused ??
 * okey, let's understand what i want to say in programming
 *
 */
// break our problem into smaller one
// sum(1)(2);
// creating a fucntion which return another function

function sumTwo(a) {
  return function (b) {
    return a + b;
  };
}
console.log(sumTwo(1)(2));

/**
 * so if we rum the above code, it will return us  the sum of 1 and 2
 * now what if there were sum(1)(2)(3);
 * then we need one more function return from innermost function
 * let's get into code and understand
 */

function sumThree(a) {
  return function (b) {
    return function (c) {
      return a + b + c;
    };
  };
}
console.log(sumThree(1)(2)(3));

/**
 * But what if there are n call;
 * can we not make above function a recursive
 * let's do it
 */

const sum = function (a) {
  return function (b) {
    if (b) {
      return sum(a + b);
    } else {
      return a;
    }
  };
};
console.log(sum(10)(20)(30)());

// Finally Convert these code into ES6 Syntex

const sumEs6 = (a) => (b) => b ? sum(a + b) : a;
console.log(sumEs6(10)(20)(30)());

/**
 * This is the oneline solution for this question. Thanks for visiting, have a nice day.
 */
