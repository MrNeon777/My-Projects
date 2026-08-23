local image = script.Parent.ImageLabel
local openButton = script.Parent.OpenButton
local addButton = script.Parent.AddButton
local itemsImage = script.Parent.Parent.Items.ImageLabel
local storeImage = script.Parent.Parent.Store.ImageLabel

local xBetween = 0.04
local xUnit = 0.2

openButton.MouseButton1Click:Connect(
	function()
		image.Visible = not image.Visible
		storeImage.Visible = false
		itemsImage.Visible = false
	end
)