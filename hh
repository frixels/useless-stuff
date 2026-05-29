local ADM = Instance.new("ScreenGui")
local CMDList = Instance.new("Frame")
local List = Instance.new("ScrollingFrame")
local UIListLayout = Instance.new("UIListLayout")
local Thing = Instance.new("Frame")
local txt = Instance.new("TextLabel")
local UICorner = Instance.new("UICorner")
local UICorner_2 = Instance.new("UICorner")
local TextLabel = Instance.new("TextLabel")
local OPN = Instance.new("ImageButton")
local UICorner_3 = Instance.new("UICorner")
local CMDBar = Instance.new("Frame")
local bar = Instance.new("TextBox")

ADM.Name = "ADM"
ADM.Parent = game:GetService("CoreGui")
ADM.ResetOnSpawn = false
ADM.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

CMDList.Name = "CMDList"
CMDList.Parent = ADM
CMDList.BackgroundColor3 = Color3.fromRGB(25, 25, 25)
CMDList.BorderColor3 = Color3.fromRGB(0, 0, 0)
CMDList.BorderSizePixel = 0
CMDList.AnchorPoint = Vector2.new(0.5, 0.5)
CMDList.Position = UDim2.new(0.5, 0, 1.1, 0)
CMDList.Size = UDim2.new(0, 250, 0, 250)
CMDList.Style = Enum.FrameStyle.DropShadow
CMDList.Visible = false

List.Name = "List"
List.Parent = CMDList
List.Active = true
List.AnchorPoint = Vector2.new(0.5, 0.5)
List.BackgroundColor3 = Color3.fromRGB(20, 20, 20)
List.BackgroundTransparency = 1.000
List.BorderColor3 = Color3.fromRGB(0, 0, 0)
List.BorderSizePixel = 0
List.Position = UDim2.new(0.5, 0, 0.525, 0)
List.Size = UDim2.new(0.95, 0, 0.9, 0)
List.ScrollBarThickness = 5
List.AutomaticCanvasSize = Enum.AutomaticSize.Y

UIListLayout.Parent = List
UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout.Padding = UDim.new(0.01, 0)

Thing.Name = "Thing"
Thing.Parent = nil
Thing.BackgroundColor3 = Color3.fromRGB(22, 22, 22)
Thing.BackgroundTransparency = 0.800
Thing.BorderColor3 = Color3.fromRGB(0, 0, 0)
Thing.BorderSizePixel = 0
Thing.Size = UDim2.new(0.955, 0, 0, 25)

txt.Name = "txt"
txt.Parent = Thing
txt.AnchorPoint = Vector2.new(0.5, 0.5)
txt.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
txt.BackgroundTransparency = 1.000
txt.BorderColor3 = Color3.fromRGB(0, 0, 0)
txt.BorderSizePixel = 0
txt.Position = UDim2.new(0.5, 0, 0.5, 0)
txt.Size = UDim2.new(0.95, 0, 1, 0)
txt.Font = Enum.Font.Ubuntu
txt.Text = "Example"
txt.TextColor3 = Color3.fromRGB(255, 255, 255)
txt.TextSize = 12.000
txt.TextStrokeTransparency = 0.000
txt.TextXAlignment = Enum.TextXAlignment.Left

UICorner.CornerRadius = UDim.new(0, 3)
UICorner.Parent = Thing

UICorner_2.CornerRadius = UDim.new(0, 3)
UICorner_2.Parent = CMDList

TextLabel.Parent = CMDList
TextLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.BackgroundTransparency = 1.000
TextLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
TextLabel.BorderSizePixel = 0
TextLabel.Size = UDim2.new(1, 0, 0.05, 0)
TextLabel.Font = Enum.Font.Ubuntu
TextLabel.Text = "The Helly commands"
TextLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.TextSize = 12.000
TextLabel.TextStrokeTransparency = 0.000

OPN.Name = "OPN"
OPN.Parent = ADM
OPN.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
OPN.BorderColor3 = Color3.fromRGB(0, 0, 0)
OPN.BorderSizePixel = 0
OPN.Position = UDim2.new(0, 6, 0.94, 0)
OPN.Size = UDim2.new(0, 50, 0, 50)
OPN.Image = "rbxassetid://121647411921022"

UICorner_3.CornerRadius = UDim.new(50, 50)
UICorner_3.Parent = OPN

CMDBar.Name = "CMDBar"
CMDBar.Parent = ADM
CMDBar.AnchorPoint = Vector2.new(0.5, 0.5)
CMDBar.BackgroundColor3 = Color3.fromRGB(35, 35, 35)
CMDBar.BorderColor3 = Color3.fromRGB(0, 0, 0)
CMDBar.BorderSizePixel = 2
CMDBar.Position = UDim2.new(0.5, 0, 1.1, 0)
CMDBar.Size = UDim2.new(0, 300, 0, 25)
CMDBar.Style = Enum.FrameStyle.DropShadow

bar.Name = "bar"
bar.Parent = CMDBar
bar.AnchorPoint = Vector2.new(0.5, 0.5)
bar.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
bar.BackgroundTransparency = 1.000
bar.BorderColor3 = Color3.fromRGB(0, 0, 0)
bar.BorderSizePixel = 0
bar.Position = UDim2.new(0.5, 0, 0.5, 0)
bar.Size = UDim2.new(1, 0, 1.4, 0)
bar.Font = Enum.Font.Ubuntu
bar.PlaceholderColor3 = Color3.fromRGB(255, 255, 255)
bar.PlaceholderText = "The helli is this hak"
bar.Text = ""
bar.TextColor3 = Color3.fromRGB(255, 255, 255)
bar.TextSize = 14.000
bar.TextStrokeTransparency = 0.000

local TS = game:GetService("TweenService")
local UIS = game:GetService("UserInputService")
local RunService = game:GetService("RunService")
local plrs = game.Players
local lp = plrs.LocalPlayer

local char = lp.Character
local humanoid = char and char:FindFirstChildOfClass("Humanoid")
local humRootPart = char and char:FindFirstChild("HumanoidRootPart")
local mouse = lp:GetMouse()

if sigma and sigma.makescriptable then
	pcall(function()
		sigma.makescriptable(lp, "SimulationRadius")
		sigma.makescriptable(lp, "MaxSimulationRadius")
	end)
end
lp.MaxSimulationRadius = 10000
lp.SimulationRadius = 10000

local Commands = {}
local savedCMDListPosition = UDim2.new(0.5, 0, 0.3, 0)
local cmdBarOpen = false
local flying = false
local flySpeed = 50
local oldGravity = workspace.Gravity
local currentAnimTracks = {}
local noclip = false
local noclipPersist = false
local NCC = {}
local clickTpEnabled = false
local CommandSignaling = {}
local currentSpectating, specConnection
local buaActive = false
local weldConnection, buaMouseConnection
local afConnection = nil
local savedWalkSpeed = nil
local savedJumpPower = nil
local savedHipHeight = nil
local wsConnection = nil
local jpConnection = nil
local hhConnection = nil
local deathPosition = nil
local spectateRefocusConnection = nil
local timeConnection = nil
local lastTick = tick()

local flyConn1 = nil
local flyConn2 = nil
local flyModeSwitchConn = nil

local BUA_CONFIG = {
	TARGET_POSITION = nil,
	TORQUE_STRENGTH = 100000,
	ALIGN_RESPONSIVENESS = 200
}

local activeRoots = {}
local dirtyParts = {}
local jointConnections = {}
local blackHoleActive = false
local BuaConnections = {}
local jointpevinf = {}

local WELD_OFFSETS = {
	default = CFrame.new(0, 0, -1.4) * CFrame.Angles(math.rad(-20), 0, 0),
	behind = CFrame.new(0, 0, 2.5) * CFrame.Angles(math.rad(0), 0, 0),
	carpet = CFrame.new(0, -3.715, 0) * CFrame.Angles(math.rad(90), 0, 0)
}

local function updateCharacterReferences()
	char = lp.Character
	if char then
		humanoid = char:FindFirstChildOfClass("Humanoid")
		humRootPart = char:FindFirstChild("HumanoidRootPart")
	else
		humanoid = nil
		humRootPart = nil
	end
end

local function isInVehicle()
	updateCharacterReferences()
	if not char then return false end
	local seat = char:FindFirstChildOfClass("Seat") or char:FindFirstChildOfClass("VehicleSeat")
	if seat then return true end
	if humanoid and humanoid.SeatPart and humanoid.SeatPart:IsA("VehicleSeat") then
		return true
	end
	return false
end

local function StopFly()
	flying = false
	if flyConn1 then flyConn1:Disconnect(); flyConn1 = nil end
	if flyConn2 then flyConn2:Disconnect(); flyConn2 = nil end
	if flyModeSwitchConn then flyModeSwitchConn:Disconnect(); flyModeSwitchConn = nil end
	updateCharacterReferences()
	if humRootPart then
		local bv = humRootPart:FindFirstChild("IYFlyBV")
		local bg = humRootPart:FindFirstChild("IYFlyBG")
		if bv then bv:Destroy() end
		if bg then bg:Destroy() end
		local cbv = humRootPart:FindFirstChild("IYCFlyBV")
		if cbv then cbv:Destroy() end
	end
	if humanoid then
		humanoid.PlatformStand = false
	end
end

local function StartFly(speed)
	updateCharacterReferences()
	if not char or not humanoid or not humRootPart then return end

	if flying then
		if speed then flySpeed = speed end
		return
	end

	flySpeed = speed or flySpeed
	flying = true

	local v3zero = Vector3.new(0, 0, 0)
	local v3inf = Vector3.new(9e9, 9e9, 9e9)

	local inCar = isInVehicle()

	if not inCar then
		local bv = Instance.new("BodyVelocity")
		bv.Name = "IYFlyBV"
		bv.MaxForce = v3zero
		bv.Velocity = v3zero
		bv.Parent = humRootPart

		local bg = Instance.new("BodyGyro")
		bg.Name = "IYFlyBG"
		bg.MaxTorque = v3inf
		bg.P = 1000
		bg.D = 50
		bg.Parent = humRootPart
	else
		local bv = Instance.new("BodyVelocity")
		bv.Name = "IYCFlyBV"
		bv.MaxForce = v3zero
		bv.Velocity = v3zero
		bv.Parent = humRootPart
	end

	flyConn1 = lp.CharacterAdded:Connect(function()
		if flying then StopFly() end
	end)

	flyConn2 = RunService.RenderStepped:Connect(function()
		updateCharacterReferences()
		if not flying then return end
		if not humRootPart or not humanoid then StopFly(); return end

		local root = humRootPart
		local cam = workspace.CurrentCamera
		local nowInCar = isInVehicle()

		if not nowInCar then
			local cbv = root:FindFirstChild("IYCFlyBV")
			if cbv then cbv:Destroy() end

			local currentBV = root:FindFirstChild("IYFlyBV")
			local currentBG = root:FindFirstChild("IYFlyBG")

			if not currentBV then
				local bv = Instance.new("BodyVelocity")
				bv.Name = "IYFlyBV"
				bv.MaxForce = v3zero
				bv.Velocity = v3zero
				bv.Parent = root
				currentBV = bv
			end

			if not currentBG then
				local bg = Instance.new("BodyGyro")
				bg.Name = "IYFlyBG"
				bg.MaxTorque = v3inf
				bg.P = 1000
				bg.D = 50
				bg.Parent = root
				currentBG = bg
			end

			currentBV.MaxForce = v3inf
			currentBG.MaxTorque = v3inf
			humanoid.PlatformStand = true
			currentBG.CFrame = cam.CFrame

			local vel = v3zero
			if UIS:IsKeyDown(Enum.KeyCode.W) then vel = vel + cam.CFrame.LookVector * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.S) then vel = vel - cam.CFrame.LookVector * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.A) then vel = vel - cam.CFrame.RightVector * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.D) then vel = vel + cam.CFrame.RightVector * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.Space) then vel = vel + Vector3.new(0, flySpeed, 0) end
			if UIS:IsKeyDown(Enum.KeyCode.LeftShift) then vel = vel - Vector3.new(0, flySpeed, 0) end
			currentBV.Velocity = vel
		else
			local bv2 = root:FindFirstChild("IYFlyBV")
			local bg2 = root:FindFirstChild("IYFlyBG")
			if bv2 then bv2:Destroy() end
			if bg2 then bg2:Destroy() end
			if humanoid then humanoid.PlatformStand = false end

			local currentBV = root:FindFirstChild("IYCFlyBV")
			if not currentBV then
				local bv = Instance.new("BodyVelocity")
				bv.Name = "IYCFlyBV"
				bv.MaxForce = v3zero
				bv.Velocity = v3zero
				bv.Parent = root
				currentBV = bv
			end

			currentBV.MaxForce = v3inf
			root.AssemblyAngularVelocity = Vector3.zero

			local rawLook = cam.CFrame.LookVector
			local rawRight = cam.CFrame.RightVector
			local camLook = Vector3.new(rawLook.X, 0, rawLook.Z).Unit
			local camRight = Vector3.new(rawRight.X, 0, rawRight.Z).Unit

			local vel = v3zero
			if UIS:IsKeyDown(Enum.KeyCode.W) then vel = vel + camLook * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.S) then vel = vel - camLook * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.A) then vel = vel - camRight * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.D) then vel = vel + camRight * flySpeed end
			if UIS:IsKeyDown(Enum.KeyCode.E) then vel = vel + Vector3.new(0, flySpeed, 0) end
			if UIS:IsKeyDown(Enum.KeyCode.LeftShift) then vel = vel - Vector3.new(0, flySpeed, 0) end
			currentBV.Velocity = vel
		end
	end)
end

local function Noclip(state)
	noclip = state
	noclipPersist = state

	for _, connection in pairs(NCC) do
		pcall(function() connection:Disconnect() end)
	end
	NCC = {}

	if state then
		table.insert(NCC, RunService.Stepped:Connect(function()
			pcall(function()
				local character = lp.Character
				if character then
					for _, part in character:GetDescendants() do
						if part:IsA("BasePart") then
							part.CanCollide = false
						end
					end
				end
			end)
		end))
	else
		pcall(function()
			local character = lp.Character
			if character then
				for _, part in character:GetDescendants() do
					if part:IsA("BasePart") then
						part.CanCollide = true
					end
				end
			end
		end)
	end
end

local function DeathHandler()
	if humRootPart then
		deathPosition = humRootPart.CFrame
	end

	flying = false

	for _, connection in pairs(NCC) do connection:Disconnect() end
	NCC = {}

	updateCharacterReferences()

	if savedWalkSpeed and humanoid then
		humanoid.WalkSpeed = savedWalkSpeed
		if wsConnection then wsConnection:Disconnect() end
		wsConnection = humanoid:GetPropertyChangedSignal("WalkSpeed"):Connect(function()
			if humanoid.WalkSpeed ~= savedWalkSpeed then
				humanoid.WalkSpeed = savedWalkSpeed
			end
		end)
	end

	if savedJumpPower and humanoid then
		humanoid.UseJumpPower = true
		humanoid.JumpPower = savedJumpPower
		if jpConnection then jpConnection:Disconnect() end
		jpConnection = humanoid:GetPropertyChangedSignal("JumpPower"):Connect(function()
			if humanoid.JumpPower ~= savedJumpPower then
				humanoid.JumpPower = savedJumpPower
			end
		end)
	end

	if savedHipHeight and humanoid then
		humanoid.HipHeight = savedHipHeight
		if hhConnection then hhConnection:Disconnect() end
		hhConnection = humanoid:GetPropertyChangedSignal("HipHeight"):Connect(function()
			if humanoid.HipHeight ~= savedHipHeight then
				humanoid.HipHeight = savedHipHeight
			end
		end)
	end

	if currentSpectating then
		task.wait(0.1)
		local cam = workspace.CurrentCamera
		if currentSpectating.Character then
			local targetHum = currentSpectating.Character:FindFirstChildOfClass("Humanoid")
			if targetHum then
				cam.CameraSubject = targetHum
			end
		end
	end
end

lp.CharacterAppearanceLoaded:Connect(function(newChar)
	char = newChar
	DeathHandler()
	if noclipPersist then
		task.wait(0.15)
		Noclip(true)
	end
end)

local function dragify(Frame)
	local dragToggle, dragInput, dragStart, startPos

	local function updateInput(input)
		local Delta = input.Position - dragStart
		local Position = UDim2.new(startPos.X.Scale, startPos.X.Offset + Delta.X, startPos.Y.Scale, startPos.Y.Offset + Delta.Y)
		TS:Create(Frame, TweenInfo.new(0.15), {Position = Position}):Play()
	end

	Frame.InputBegan:Connect(function(input)
		if (input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch) and not UIS:GetFocusedTextBox() then
			dragToggle = true
			dragStart = input.Position
			startPos = Frame.Position
			input.Changed:Connect(function()
				if input.UserInputState == Enum.UserInputState.End then
					dragToggle = false
				end
			end)
		end
	end)

	Frame.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
			dragInput = input
		end
	end)

	UIS.InputChanged:Connect(function(input)
		if input == dragInput and dragToggle then
			updateInput(input)
		end
	end)
end

dragify(CMDList)

local function IsValidCandidate(v)
	return v:IsA("BasePart")
		and not v.Anchored
		and not v.Parent:FindFirstChildOfClass("Humanoid")
		and not v.Parent:FindFirstChild("Head")
		and v.Name ~= "Handle"
end

local function EnableBUA(part)
	if activeRoots[part] then return end

	for _, x in part:GetChildren() do
		if x:IsA("BodyMover") or x:IsA("RocketPropulsion") then
			x:Destroy()
		end
	end

	for _, x in part:GetConnectedParts(true) do
		x.CanCollide = false
		x.CustomPhysicalProperties = PhysicalProperties.new(0.001, 0, 0, 0, 0)
	end
	part.CanCollide = false
	part.CustomPhysicalProperties = PhysicalProperties.new(0.001, 0, 0, 0, 0)

	local Torque = Instance.new("Torque")
	Torque.Name = "BUATorque"
	Torque.Parent = part
	Torque.Torque = Vector3.new(BUA_CONFIG.TORQUE_STRENGTH, BUA_CONFIG.TORQUE_STRENGTH, BUA_CONFIG.TORQUE_STRENGTH)

	local Attachment = Instance.new("Attachment")
	Attachment.Name = "BUAAttachment"
	Attachment.Parent = part
	Torque.Attachment0 = Attachment

	local AlignPosition = Instance.new("AlignPosition")
	AlignPosition.Name = "BUAAlignPosition"
	AlignPosition.Parent = part
	AlignPosition.MaxForce = math.huge
	AlignPosition.MaxVelocity = math.huge
	AlignPosition.Responsiveness = BUA_CONFIG.ALIGN_RESPONSIVENESS
	AlignPosition.Attachment0 = Attachment
	AlignPosition.Mode = Enum.PositionAlignmentMode.OneAttachment

	activeRoots[part] = {Part = part, AP = AlignPosition}
end

local function CleanPart(part)
	if activeRoots[part] then
		local d = activeRoots[part]
		if d.AP then d.AP:Destroy() end
		if d.Part then
			local t = d.Part:FindFirstChild("BUATorque")
			if t then t:Destroy() end
			local a = d.Part:FindFirstChild("BUAAttachment")
			if a then a:Destroy() end

			for _, x in d.Part:GetConnectedParts(true) do
				x.CanCollide = true
				x.CustomPhysicalProperties = nil
			end
			d.Part.CanCollide = true
			d.Part.CustomPhysicalProperties = nil
		end
		activeRoots[part] = nil
	end
	local t = part:FindFirstChild("BUATorque")
	if t then t:Destroy() end
	local ap = part:FindFirstChild("BUAAlignPosition")
	if ap then ap:Destroy() end
end

local function ProcessDirtyParts()
	for part in pairs(dirtyParts) do
		if part and part.Parent then
			if IsValidCandidate(part) then
				local root = part.AssemblyRootPart
				if root == part or not root then
					EnableBUA(part)
				else
					CleanPart(part)
					dirtyParts[root] = true
				end
			else
				CleanPart(part)
			end
		else
			CleanPart(part)
		end
		dirtyParts[part] = nil
	end
end

local function OnJointChanged(joint)
	if jointpevinf[joint] then
		local data = jointpevinf[joint]
		if data[1] then dirtyParts[data[1]] = true end
		if data[2] then dirtyParts[data[2]] = true end
	end
	if joint.Part0 then dirtyParts[joint.Part0] = true end
	if joint.Part1 then dirtyParts[joint.Part1] = true end
	jointpevinf[joint] = {joint.Part0, joint.Part1}
end

local function TrackJoint(joint)
	if jointConnections[joint] then return end

	local connections = {
		joint:GetPropertyChangedSignal("Part0"):Connect(function() OnJointChanged(joint) end),
		joint:GetPropertyChangedSignal("Part1"):Connect(function() OnJointChanged(joint) end),
		joint:GetPropertyChangedSignal("Active"):Connect(function() OnJointChanged(joint) end),
		joint.Destroying:Connect(function() OnJointChanged(joint) end)
	}
	jointConnections[joint] = connections
	OnJointChanged(joint)
end

local function TrackInstance(v)
	if v:IsA("BasePart") then
		dirtyParts[v] = true
	elseif v:IsA("JointInstance") or v:IsA("WeldConstraint") or v:IsA("Weld") or v:IsA("ManualWeld")
		or v:IsA("Motor6D") or v:IsA("DynamicWeld") or v:IsA("RotateP") or v:IsA("RotateV") then
		TrackJoint(v)
	end
end

local function StartBUA()
	while blackHoleActive do
		lp.SimulationRadius = 1000
		task.wait()
	end

	blackHoleActive = true

	for _, v in workspace:GetDescendants() do
		TrackInstance(v)
	end

	BuaConnections.DescendantAdded = workspace.DescendantAdded:Connect(TrackInstance)
	BuaConnections.DescendantRemoving = workspace.DescendantRemoving:Connect(function(v)
		if v:IsA("BasePart") then
			CleanPart(v)
			dirtyParts[v] = nil
		elseif v:IsA("JointInstance") or v:IsA("WeldConstraint") then
			OnJointChanged(v)
			if jointConnections[v] then
				for _, c in pairs(jointConnections[v]) do c:Disconnect() end
				jointConnections[v] = nil
			end
		end
	end)
	BuaConnections.Heartbeat = RunService.Heartbeat:Connect(ProcessDirtyParts)
end

local function StopBUA()
	blackHoleActive = false

	for _, conn in pairs(BuaConnections) do
		if conn then conn:Disconnect() end
	end
	BuaConnections = {}

	for part in pairs(activeRoots) do
		CleanPart(part)
	end

	for joint, conns in pairs(jointConnections) do
		for _, c in pairs(conns) do c:Disconnect() end
	end

	activeRoots = {}
	dirtyParts = {}
	jointConnections = {}
	jointpevinf = {}
	BUA_CONFIG.TARGET_POSITION = nil
end

local function AntiFling(state)
	if state == false then
		if afConnection then
			afConnection:Disconnect()
			afConnection = nil
		end
		return
	end
	local LastVel
	local AngVel
	local LastCF
	if afConnection then
		afConnection:Disconnect()
		afConnection = nil
	end
	afConnection = RunService.Heartbeat:Connect(function()
		local Char = lp.Character
		if Char then
			local Root = Char:FindFirstChild("HumanoidRootPart")
			if not Root then return end
			local NewAngVel
			local NewVel
			if LastVel then
				local Change = (LastVel - Root.AssemblyLinearVelocity).Magnitude
				local MMag = Root.AssemblyLinearVelocity.Magnitude
				local LVELMAg = LastVel.Magnitude
				if Change > 55 and MMag > LVELMAg then
					NewVel = LastVel
					local MoveVec = Root.CFrame.Position - LastCF.Position
					local Mag = MoveVec.Magnitude
					if Mag < 1e-6 then
						MoveVec = Vector3.zAxis
						Mag = 1
					end
					local NewPos = LastCF.Position + (MoveVec / Mag) * .2
					Root.CFrame = CFrame.new(NewPos) * LastCF.Rotation
				else
					LastVel = Root.AssemblyLinearVelocity
					LastCF = Root.CFrame
				end
				local Change2 = (AngVel - Root.AssemblyAngularVelocity).Magnitude
				MMag = Root.AssemblyAngularVelocity.Magnitude
				LVELMAg = AngVel.Magnitude
				if Change2 > 10 and MMag > LVELMAg then
					NewAngVel = AngVel
					local MoveVec = Root.CFrame.Position - LastCF.Position
					local Mag = MoveVec.Magnitude
					if Mag < 1e-6 then
						MoveVec = Vector3.zAxis
						Mag = 1
					end
					local NewPos = LastCF.Position + (MoveVec / Mag) * .2
					Root.CFrame = CFrame.new(NewPos) * LastCF.Rotation
				else
					AngVel = Root.AssemblyAngularVelocity
					LastCF = Root.CFrame
				end
			else
				LastVel = Root.AssemblyLinearVelocity
				AngVel = Root.AssemblyAngularVelocity
			end
			if NewVel then
				for i, v in Char:GetDescendants() do
					if v:IsA("BasePart") then
						v.AssemblyLinearVelocity = NewVel
					end
				end
			end
			if NewAngVel then
				for i, v in Char:GetDescendants() do
					if v:IsA("BasePart") then
						v.AssemblyAngularVelocity = NewAngVel
					end
				end
			end
			local hum = Char:FindFirstChild("Humanoid")
			if hum then
				hum:SetStateEnabled(1, false)
				hum:SetStateEnabled(16, false)
				hum:SetStateEnabled(0, false)
			end
		end
	end)
end

local function TargetFinder(prefix)
	prefix = prefix:lower()
	for _, player in plrs:GetPlayers() do
		if player.Name:lower():sub(1, #prefix) == prefix or player.DisplayName:lower():sub(1, #prefix) == prefix then
			return player
		end
	end
end

local function GotoTarget(targetPlayer)
	updateCharacterReferences()
	if not targetPlayer or not humRootPart then return end
	local targetCharacter = targetPlayer.Character
	if not targetCharacter then return end

	local targetHumRootPart = targetCharacter:FindFirstChild("HumanoidRootPart")
		or targetCharacter:FindFirstChild("Torso")
		or targetCharacter:FindFirstChild("UpperTorso")

	if targetHumRootPart then
		humRootPart.CFrame = targetHumRootPart.CFrame * CFrame.new(0, 0, 3)
	end
end

local function StartSpectate(targetPlayer)
	if not targetPlayer or not targetPlayer.Character then return end
	currentSpectating = targetPlayer
	local cam = workspace.CurrentCamera
	local targetHum = targetPlayer.Character:FindFirstChildOfClass("Humanoid")
	if targetHum then
		cam.CameraSubject = targetHum
	end

	if specConnection then
		specConnection:Disconnect()
	end
	if spectateRefocusConnection then
		spectateRefocusConnection:Disconnect()
	end

	specConnection = targetPlayer.CharacterAppearanceLoaded:Connect(function(newChar)
		local newHum = newChar:WaitForChild("Humanoid", 5)
		if newHum and currentSpectating == targetPlayer then
			cam.CameraSubject = newHum
		end
	end)

	spectateRefocusConnection = lp.CharacterAppearanceLoaded:Connect(function()
		if currentSpectating == targetPlayer and targetPlayer.Character then
			local targetHum2 = targetPlayer.Character:FindFirstChildOfClass("Humanoid")
			if targetHum2 then
				cam.CameraSubject = targetHum2
			end
		end
	end)
end

local function StopSpectate()
	if specConnection then
		specConnection:Disconnect()
		specConnection = nil
	end
	if spectateRefocusConnection then
		spectateRefocusConnection:Disconnect()
		spectateRefocusConnection = nil
	end
	currentSpectating = nil
	local cam = workspace.CurrentCamera
	updateCharacterReferences()
	if char and char:FindFirstChildOfClass("Humanoid") then
		cam.CameraSubject = char:FindFirstChildOfClass("Humanoid")
	end
end

local function StopAnims()
	for _, v in pairs(currentAnimTracks) do
		v:Stop()
	end
	currentAnimTracks = {}
end

local function PlayAnim(animId, speed, fadetime, weight, StopOthers, looped)
	updateCharacterReferences()
	if not humanoid then return end

	local anim = Instance.new("Animation")
	anim.AnimationId = "rbxassetid://" .. animId

	if StopOthers then StopAnims() end

	local currentAnimTrack = humanoid:LoadAnimation(anim)
	currentAnimTrack.Looped = looped
	currentAnimTrack:Play(fadetime, weight, speed)
	table.insert(currentAnimTracks, currentAnimTrack)
end

local function ClickTP()
	clickTpEnabled = true
	mouse.Button1Down:Connect(function()
		updateCharacterReferences()
		if clickTpEnabled and humanoid and humRootPart then
			local isCtrlPressed = UIS:IsKeyDown(Enum.KeyCode.LeftControl) or UIS:IsKeyDown(Enum.KeyCode.RightControl)
			if isCtrlPressed then
				humRootPart.CFrame = CFrame.new(mouse.Hit.p) + Vector3.new(0, 5, 0)
			end
		end
	end)
end

local function SetGrav(value)
	workspace.Gravity = value or oldGravity
end

local function StopWeld()
	if weldConnection then
		weldConnection:Disconnect()
		weldConnection = nil
	end
	workspace.Gravity = oldGravity
	updateCharacterReferences()
	if humanoid then
		local statesToEnable = {
			Enum.HumanoidStateType.Running,
			Enum.HumanoidStateType.RunningNoPhysics,
			Enum.HumanoidStateType.Climbing,
			Enum.HumanoidStateType.Jumping,
			Enum.HumanoidStateType.Freefall,
			Enum.HumanoidStateType.FallingDown,
			Enum.HumanoidStateType.GettingUp,
			Enum.HumanoidStateType.Seated
		}
		for _, state in statesToEnable do
			pcall(function()
				humanoid:SetStateEnabled(state, true)
			end)
		end
		humanoid.PlatformStand = false
	end
end

local function WeldTarget(targetPlayer, offsetType)
	updateCharacterReferences()
	if not targetPlayer or not targetPlayer.Character then return end
	if not char or not humanoid or not humRootPart then return end

	local targetRoot = targetPlayer.Character:FindFirstChild("HumanoidRootPart")
	if not targetRoot then return end

	StopWeld()

	local offset = WELD_OFFSETS[offsetType] or WELD_OFFSETS.default

	if sigma and sigma.makescriptable then
		pcall(function()
			sigma.makescriptable(humRootPart, "PhysicsRepRootPart")
		end)

		for _, v in char:GetDescendants() do
			if v:IsA("BasePart") then
				pcall(function()
					sigma.makescriptable(v, "NetworkIsSleeping")
				end)
			end
		end
	end

	local statesToDisable = {
		Enum.HumanoidStateType.Running,
		Enum.HumanoidStateType.RunningNoPhysics,
		Enum.HumanoidStateType.Climbing,
		Enum.HumanoidStateType.Jumping,
		Enum.HumanoidStateType.Freefall,
		Enum.HumanoidStateType.FallingDown,
		Enum.HumanoidStateType.GettingUp,
		Enum.HumanoidStateType.Seated
	}

	for _, state in statesToDisable do
		pcall(function()
			humanoid:SetStateEnabled(state, false)
		end)
	end

	humanoid.PlatformStand = true
	workspace.Gravity = 0

	weldConnection = RunService.Heartbeat:Connect(function()
		updateCharacterReferences()
		if not char or not humRootPart or not humRootPart.Parent or not targetPlayer.Character or not targetRoot or not targetRoot.Parent then
			StopWeld()
			return
		end

		pcall(function()
			humRootPart.PhysicsRepRootPart = targetRoot
		end)

		humRootPart.CFrame = targetRoot.CFrame * offset

		for _, v in char:GetDescendants() do
			if v:IsA("BasePart") then
				pcall(function()
					v.NetworkIsSleeping = true
					v.AssemblyLinearVelocity = Vector3.zero
					v.AssemblyAngularVelocity = Vector3.zero
				end)
			end
		end
	end)
end

local function TouchAll()
	updateCharacterReferences()
	if not char or not humanoid or not humRootPart then return end

	for _, v in workspace:GetDescendants() do
		if v:IsA("TouchTransmitter") then
			local bp = v.Parent
			if bp and (bp:IsA("BasePart") or bp:IsA("MeshPart")) then
				sigma.firetouchinterest(humRootPart, bp, 1)
				sigma.firetouchinterest(humRootPart, bp, 0)
			end
		end
	end
end

local function ClickAll()
	for _, v in workspace:GetDescendants() do
		if v:IsA("ClickDetector") then
			fireclickdetector(v)
		end
	end
end

local function removeSemicolon()
	if bar.Text:sub(1, 1) == ";" then
		bar.Text = bar.Text:sub(2)
		bar.CursorPosition = #bar.Text + 1
	end
end

bar:GetPropertyChangedSignal("Text"):Connect(removeSemicolon)

local CommandCategories = {
	{name = "Movement", commands = {}},
	{name = "Character", commands = {}},
	{name = "Animation", commands = {}},
	{name = "Weld/Attach", commands = {}},
	{name = "Exploit", commands = {}},
	{name = "Utility", commands = {}},
}

local function addCommandToCategory(categoryIndex, name, callback, args)
	Commands[name:lower()] = callback

	table.insert(CommandCategories[categoryIndex].commands, {
		name = name,
		args = args or ""
	})
end

local function BuildCommandList()
	for _, child in List:GetChildren() do
		if child:IsA("Frame") or child:IsA("TextLabel") then
			if child ~= UIListLayout then
				child:Destroy()
			end
		end
	end

	for _, category in ipairs(CommandCategories) do
		local categoryLabel = Instance.new("TextLabel")
		categoryLabel.Name = "CategoryLabel"
		categoryLabel.Parent = List
		categoryLabel.BackgroundColor3 = Color3.fromRGB(30, 30, 30)
		categoryLabel.BackgroundTransparency = 0.5
		categoryLabel.BorderSizePixel = 0
		categoryLabel.Size = UDim2.new(0.955, 0, 0, 20)
		categoryLabel.Font = Enum.Font.Ubuntu
		categoryLabel.Text = "── " .. category.name .. " ──"
		categoryLabel.TextColor3 = Color3.fromRGB(252, 152, 3)
		categoryLabel.TextSize = 11
		categoryLabel.TextStrokeTransparency = 0.5

		local corner = Instance.new("UICorner")
		corner.CornerRadius = UDim.new(0, 3)
		corner.Parent = categoryLabel

		for _, cmd in ipairs(category.commands) do
			local cmdFrame = Thing:Clone()
			local displayText = cmd.name
			if cmd.args and cmd.args ~= "" then
				displayText = displayText .. " " .. cmd.args
			end
			cmdFrame.txt.Text = displayText
			cmdFrame.Parent = List
			cmdFrame.Visible = true
		end
	end
end

local function executeCommand(input)
	local args = string.split(input, " ")
	local cmdName = args[1]:lower()

	if Commands[cmdName] then
		table.remove(args, 1)
		Commands[cmdName](args)
	else
		warn("Command not found: " .. cmdName)
	end
end

addCommandToCategory(1, "fly", function(args)
	local speed = tonumber(args[1])
	if flying then
		if speed then
			flySpeed = speed
		else
			StopFly()
		end
	else
		StartFly(speed)
	end
end, "[speed]")

addCommandToCategory(1, "sfly", function()
	StopFly()
end)

addCommandToCategory(1, "goto", function(args)
	GotoTarget(TargetFinder(table.concat(args, " ")))
end, "[player]")

addCommandToCategory(1, "noclip", function()
	Noclip(true)
end)

addCommandToCategory(1, "clip", function()
	Noclip(false)
end)

addCommandToCategory(1, "ctp", function()
	ClickTP()
end)

addCommandToCategory(2, "ws", function(args)
	updateCharacterReferences()
	local wsValue = tonumber(args[1])
	if wsValue and humanoid then
		savedWalkSpeed = wsValue
		humanoid.WalkSpeed = wsValue

		if wsConnection then
			wsConnection:Disconnect()
		end

		wsConnection = humanoid:GetPropertyChangedSignal("WalkSpeed"):Connect(function()
			if humanoid.WalkSpeed ~= savedWalkSpeed then
				humanoid.WalkSpeed = savedWalkSpeed
			end
		end)
	end
end, "[speed]")

addCommandToCategory(2, "jp", function(args)
	updateCharacterReferences()
	local jpValue = tonumber(args[1])
	if jpValue and humanoid then
		savedJumpPower = jpValue
		humanoid.UseJumpPower = true
		humanoid.JumpPower = jpValue

		if jpConnection then
			jpConnection:Disconnect()
		end

		jpConnection = humanoid:GetPropertyChangedSignal("JumpPower"):Connect(function()
			if humanoid.JumpPower ~= savedJumpPower then
				humanoid.JumpPower = savedJumpPower
			end
		end)
	end
end, "[power]")

addCommandToCategory(2, "hh", function(args)
	updateCharacterReferences()
	local hhValue = tonumber(args[1])
	if hhValue and humanoid then
		savedHipHeight = hhValue
		humanoid.HipHeight = hhValue

		if hhConnection then
			hhConnection:Disconnect()
		end

		hhConnection = humanoid:GetPropertyChangedSignal("HipHeight"):Connect(function()
			if humanoid.HipHeight ~= savedHipHeight then
				humanoid.HipHeight = savedHipHeight
			end
		end)
	end
end, "[height]")

addCommandToCategory(2, "grav", function(args)
	SetGrav(tonumber(args[1]))
end, "[value]")

addCommandToCategory(2, "infjump", function()
	if CommandSignaling["infjump"] then
		CommandSignaling["infjump"]:Disconnect()
		CommandSignaling["infjump"] = nil
	end
	CommandSignaling["infjump"] = UIS.JumpRequest:Connect(function()
		updateCharacterReferences()
		if char and humanoid then
			humanoid:ChangeState(Enum.HumanoidStateType.Jumping)
		end
	end)
end)

addCommandToCategory(2, "af", function()
	AntiFling(true)
end)

addCommandToCategory(2, "saf", function()
	AntiFling(false)
end)

addCommandToCategory(2, "sit", function()
	updateCharacterReferences()
	if humanoid then
		humanoid.Sit = true
	end
end)

addCommandToCategory(2, "reset", function()
	updateCharacterReferences()
	if humRootPart then
		deathPosition = humRootPart.CFrame
	end

	if humanoid then
		sigma.replicatesignal(humanoid, "ServerBreakJoints")
	end
	sigma.replicatesignal(lp, "Kill")
	sigma.replicatesignal(lp, "ConnectDiedSignalBackend")

	task.spawn(function()
		lp.CharacterAppearanceLoaded:Wait()
		updateCharacterReferences()
		if humRootPart and deathPosition then
			humRootPart.CFrame = deathPosition
		end
	end)
end)

addCommandToCategory(3, "anim", function(args)
	local animId = tonumber(args[1])
	if not animId then return end

	local looped = true
	local speed = 1
	local weight = 1

	if args[2] then
		local loopArg = args[2]:lower()
		looped = (loopArg == "t" or loopArg == "true")
	end

	if args[3] then speed = tonumber(args[3]) or 1 end
	if args[4] then weight = tonumber(args[4]) or 1 end

	PlayAnim(animId, speed, 1, weight, true, looped)
end, "[id] [loop] [speed] [weight]")

addCommandToCategory(3, "sanim", function()
	StopAnims()
end)

addCommandToCategory(3, "spin", function(args)
	local speed = tonumber(args[1]) or 20
	if CommandSignaling["spin"] then
		CommandSignaling["spin"]:Disconnect()
	end
	CommandSignaling["spin"] = RunService.Heartbeat:Connect(function()
		updateCharacterReferences()
		if char and humRootPart then
			humRootPart.CFrame = humRootPart.CFrame * CFrame.Angles(0, math.rad(speed), 0)
		end
	end)
end, "[speed]")

addCommandToCategory(3, "sspin", function()
	if CommandSignaling["spin"] then
		CommandSignaling["spin"]:Disconnect()
		CommandSignaling["spin"] = nil
	end
end)

addCommandToCategory(4, "climb", function(args)
	local targetPlayer = TargetFinder(table.concat(args, " "))
	if targetPlayer then WeldTarget(targetPlayer, "default") end
end, "[player]")

addCommandToCategory(4, "sclimb", function()
	StopWeld()
end)

addCommandToCategory(4, "behind", function(args)
	local targetPlayer = TargetFinder(table.concat(args, " "))
	if targetPlayer then WeldTarget(targetPlayer, "behind") end
end, "[player]")

addCommandToCategory(4, "sbehind", function()
	StopWeld()
end)

addCommandToCategory(4, "carpet", function(args)
	local targetPlayer = TargetFinder(table.concat(args, " "))
	if targetPlayer then WeldTarget(targetPlayer, "carpet") end
end, "[player]")

addCommandToCategory(4, "scarpet", function()
	StopWeld()
end)

addCommandToCategory(5, "bup", function()
	if not buaActive then
		buaActive = true
		StartBUA()
	end
end)

addCommandToCategory(5, "sbup", function()
	if buaActive then
		buaActive = false
		StopBUA()
	end
end)

addCommandToCategory(5, "touchall", function()
	TouchAll()
end)

addCommandToCategory(5, "clickall", function()
	ClickAll()
end)

addCommandToCategory(6, "watch", function(args)
	local targetPlayer = TargetFinder(table.concat(args, " "))
	if targetPlayer then StartSpectate(targetPlayer) end
end, "[player]")

addCommandToCategory(6, "swatch", function()
	StopSpectate()
end)

addCommandToCategory(6, "maxzoom", function(args)
	local zoomValue = tonumber(args[1])
	if zoomValue then
		lp.CameraMaxZoomDistance = zoomValue
	end
end, "[distance]")

addCommandToCategory(6, "fcam", function()
	local camera = workspace.CurrentCamera
	local character = lp.Character
	if character and character:FindFirstChildOfClass("Humanoid") then
		camera.CameraSubject = character:FindFirstChildOfClass("Humanoid")
	end
end)

addCommandToCategory(6, "rs", function()
	game:GetService("HttpService"):requestInternal{
		Url = "https://raw.githubusercontent.com/frixels/useless-stuff/refs/heads/main/Remotify",
		Method = "GET"
	}:Start(function(success, response)
		if success then
			sigma.loadstring(response.Body)()
		end
	end)
end)

addCommandToCategory(6, "dex", function()
	game:GetService("HttpService"):requestInternal{
		Url = "https://raw.githubusercontent.com/frixels/useless-stuff/refs/heads/main/dex%20moficationationnation",
		Method = "GET"
	}:Start(function(success, response)
		if success then
			sigma.loadstring(response.Body)()
		end
	end)
end)

addCommandToCategory(6, "time", function(args)
	if timeConnection then
		timeConnection:Disconnect()
		timeConnection = nil
	end

	if not args[1] then return end

	local hour = tonumber(args[1])
	if not hour then return end

	hour = math.clamp(hour, 0, 24)

	local Lighting = game:GetService("Lighting")
	timeConnection = RunService.Heartbeat:Connect(function()
		Lighting.ClockTime = hour
	end)
end, "[0-24]")

addCommandToCategory(6, "cmds", function()
	if CMDList.Visible then
		savedCMDListPosition = CMDList.Position
		local tween1 = TS:Create(CMDList, TweenInfo.new(0.1), {Position = UDim2.new(0.5, 0, 1.1, 0)})
		tween1:Play()
		tween1.Completed:Wait()
		CMDList.Visible = false
	else
		CMDList.Visible = true
		TS:Create(CMDList, TweenInfo.new(0.1), {Position = savedCMDListPosition}):Play()
	end
end)

BuildCommandList()

bar.FocusLost:Connect(function(enterPressed)
	if enterPressed and bar.Text ~= "" then
		executeCommand(bar.Text)
		bar.Text = ""
	end
end)

UIS.InputBegan:Connect(function(input, gameProcessed)
	if gameProcessed then return end

	if input.KeyCode == Enum.KeyCode.Semicolon and cmdBarOpen then
		bar:CaptureFocus()
	elseif input.KeyCode == Enum.KeyCode.Minus then
		if cmdBarOpen then
			local tween1 = TS:Create(CMDBar, TweenInfo.new(0.1), {Position = UDim2.new(0.5, 0, 1.1, 0)})
			tween1:Play()
			tween1.Completed:Wait()
			cmdBarOpen = false
		else
			cmdBarOpen = true
			TS:Create(CMDBar, TweenInfo.new(0.1), {Position = UDim2.new(0.5, 0, 0.85, 0)}):Play()
		end
	end
end)

task.spawn(function()
	OPN.MouseButton1Click:Connect(function()
		if cmdBarOpen then
			local tween1 = TS:Create(CMDBar, TweenInfo.new(0.1), {Position = UDim2.new(0.5, 0, 1.1, 0)})
			tween1:Play()
			tween1.Completed:Wait()
			cmdBarOpen = false
		else
			cmdBarOpen = true
			TS:Create(CMDBar, TweenInfo.new(0.1), {Position = UDim2.new(0.5, 0, 0.85, 0)}):Play()
		end
	end)

	while true do
		OPN.Rotation = OPN.Rotation + 0.1
		task.wait()
	end
end)

buaMouseConnection = mouse.Button1Down:Connect(function()
	if buaActive then
		local isAltPressed = UIS:IsKeyDown(Enum.KeyCode.LeftAlt) or UIS:IsKeyDown(Enum.KeyCode.RightAlt)
		if isAltPressed then
			BUA_CONFIG.TARGET_POSITION = mouse.Hit.p
		end
	end
end)

RunService.RenderStepped:Connect(function()
	if buaActive then
		local targetPos = BUA_CONFIG.TARGET_POSITION
		if not targetPos then
			updateCharacterReferences()
			if humRootPart then
				targetPos = humRootPart.Position
			else
				return
			end
		end

		for part, data in pairs(activeRoots) do
			if part.Parent and data.AP.Parent then
				data.AP.Position = targetPos
			else
				CleanPart(part)
			end
		end
	end
end)

RunService.RenderStepped:Connect(function()
	updateCharacterReferences()
	if not humRootPart then return end

	local dt = tick() - lastTick
	lastTick = tick()
	if dt > 0.1 then dt = 0.016 end
end)
