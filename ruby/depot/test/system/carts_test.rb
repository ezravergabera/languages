require 'application_system_test_case'

class CartsTest < ApplicationSystemTestCase
  setup do
    @cart = carts(:one)
  end

  test 'visiting the index' do
    visit carts_url
    assert_selector 'h1', text: 'Carts'
  end

  test 'should create cart' do
    visit carts_url
    click_on 'New cart'

    click_on 'Create Cart'

    assert_text 'Cart was successfully created'
    click_on 'Back'
  end

  test 'should update Cart' do
    visit cart_url(@cart)
    click_on 'Edit this cart', match: :first

    click_on 'Update Cart'

    assert_text 'Cart was successfully updated'
    click_on 'Back'
  end

  test 'should destroy Cart' do
    visit cart_url(@cart)
    accept_confirm { click_on 'Destroy this cart', match: :first }

    assert_text 'Cart was successfully destroyed'
  end

  test 'adding a unique product creates a new line item' do
    @cart.add_product(product(:ruby))
    @cart.add_product(product(:rails))

    assert_equal 2, @cart.line_items.size, 'Cart should have 2 different line items'
  end

  test 'adding a duplicate product increases its quantity' do
    @cart.add_product(product(:ruby))
    @cart.add_product(product(:ruby))

    assert_equal 1, @cart.line_items.size, 'Cart should only have 1 line item for the duplicate product'
    assert_equal 2, @cart.line_items.first.quantity, 'Line item quantity should be incremented'
  end
end
