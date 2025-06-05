// reference types(copy by reference)->objects,arrays,functions ,definition:store as objects which are really just references to location in memory
let x = {
  value: 10,
};
let y = x;
x.value = 30;
console.log(`x=${x.value}`, `y=${y.value}`);
// major diff b/w primitive and reference is primitive store directly in variable while reference type holds a pointer(reference) to the location in memory where the object exsists
