local button = script.Parent.ImageButton
local image = script.Parent.ImageLabel
local storeImage = script.Parent.Parent.Store.ImageLabel
local unitsImage = script.Parent.Parent.Units.ImageLabel

button.MouseButton1Click:Connect(
	function()
		image.Visible = not image.Visible
		storeImage.Visible = false
		unitsImage.Visible = false
	end
)