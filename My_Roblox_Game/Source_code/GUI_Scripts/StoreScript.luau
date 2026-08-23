local shopButton = script.Parent.ImageButton
local image = script.Parent.ImageLabel
local gamepassButton = image.ScrollingFrame.TextButton
local MarketplaceService = game:GetService("MarketplaceService")
local Players = game:GetService("Players")
local player = Players.LocalPlayer
local unitsImage = script.Parent.Parent.Units.ImageLabel
local itemsImage = script.Parent.Parent.Items.ImageLabel

local GAMEPASS_ID = 1419819558 

gamepassButton.MouseButton1Click:Connect(
	function()
		MarketplaceService:PromptGamePassPurchase(player, GAMEPASS_ID)
	end
)

shopButton.MouseButton1Click:Connect(
	function()
		image.Visible = not image.Visible
		itemsImage.Visible = false
		unitsImage.Visible = false
	end
)