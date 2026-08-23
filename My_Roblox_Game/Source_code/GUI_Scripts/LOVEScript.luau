--[[
	Создаю референсы для объектов.
	Create references for the objects.
]]
local button = script.Parent.ImageButton
local filling = script.Parent.Frame.LOVE_Filling
local XP = script.Parent.Exp.Value
--[[
	Создаю переменные для опыта и уровня.
	Create variables for experience and level.
]]
local LOVE = 1
local XPNeed = 100

local function newLevel()
	while XPNeed <= XP do
		LOVE = LOVE + 1
		XP = XP - XPNeed
		XPNeed = math.floor(XPNeed * 1.25)
	end
end

button.MouseButton1Click:Connect(
	function()
		XP = XP + 1
		if XP >= XPNeed then
			newLevel()
			print(XPNeed)
		end
		filling.Size = UDim2.new(XP / XPNeed, 0, 1, 0)
	end
)