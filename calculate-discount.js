/**
 * Calculate final price after discount and tax
 * Test function for Revu AI Review
 */
function calculateFinalPrice(cartItems, discountPercent, taxRate) {
  let subtotal = 0;

  for (let i = 0; i < cartItems.length; i++) {
    subtotal += cartItems[i].price * cartItems[i].quantity;
  }

  // Potential bug: missing validation for negative discount or empty cart
  const discountAmount = subtotal * (discountPercent / 100);
  const discountedTotal = subtotal - discountAmount;
  const finalPrice = discountedTotal + (discountedTotal * taxRate);

  return finalPrice;
}

module.exports = { calculateFinalPrice };
