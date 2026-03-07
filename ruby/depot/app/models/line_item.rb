class LineItem < ApplicationRecord
  belongs_to :product
  belongs_to :cart

  validates :product, :cart, presence: true
  validates :price, numericality: { greater_than_or_equal_to: 0.01 }
  validates :quantity, numericality: { greater_than: 0, only_integer: true }

  def total_price
    product.price * quantity
  end
end
