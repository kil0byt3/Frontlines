class DT_Core {
	tag = "DT";

	class Command {
		file = "Command";
		class initEnvironmentMenu {};
		class initIntelMenu {};
		class initSupportMenu {};
		class initZeusMenu {};
		class mineScanner {};
		class onIntelMenuTvChange {};
		class onSupportMapPress {};
		class onSupportMenuTvChange {};
		class opforScanner {};
		class showMissionInfo {};
		class startIntelAction {};
		class startSupport {};
		class updateEnvironment {};
		class zeusAction {};
	};

	class Groups {
		file = "Groups";
		class assignPlayer {};
		class handleDisconnect {};
		class initGroupMenu {};
		class initLrRadio {};
		class initSwRadios {};
		class onGroupMenuTvSelectChange {};
		class onRespawn {};
		class removeFromGroup {};
		class selectPosition {};
		class setupPlayer {};
		class updateGroups {};
	};

	class Logistics {
		file = "Logistics";
		class adjustResources {};
		class buildLoop {};
		class clearCargo {};
		class compareResources {};
		class createNewFob {};
		class createSupplyCrate {};
		class deployPlayer {};
		class drawDownFob {};
		class fetchDetails {};
		class getConfigSide {};
		class getCurrentResources {};
		class initBuildMenu {};
		class initDeployMenu {};
		class initFactoryMenu {};
		class initialiseObject {};
		class initLogisticsMenu {};
		class initNamingMenu {};
		class initRetrieveMenu {};
		class initSupplyCrateMenu {};
		class loadCrate {};
		class logisticsMenuStartRoute {};
		class moveObject {};
		class nameFob {};
		class onBuildMenuTvChange {};
		class onDeployMenuTvChange {};
		class onFactoryMapPress {};
		class onFactoryMenuLbChange {};
		class onLogisticsMenuComboChange {};
		class onLogisticsMenuLbChange {};
		class onSupplyCrateTvChange {};
		class recycleObject {};
		class retrieveResources {};
		class setupBuild {};
		class setupUAV {};
		class startBuild {};
		class storeCrate {};
		class unloadCrate {};
		class updateFactory {};
		class updateLogistics {};
	};

	class Missions {
		file = "Missions";
		class ambushLogisticsConvoy {};
		class captureUAV {};
		class clearUXOs {};
		class destroyAA {};
		class destroyJammer {};
		class fobAssault {};
		class fobHunt {};
		class humanitarianRelief {};
		class listeningPost {};
		class provideAid {};
		class raidSupplyDepot {};
		class repairRequest {};
		class sectorCounterAttack {};
		class startSideMission {};
	};

	class Server {
		file = "Server";
		class activateSector {};
		class addClassEventHandlers {};
		class areaIsClear {};
		class assignZeus {};
		class autoCrateRetrieve {};
		class buildingChanged {};
		class buyNewTruck {};
		class calculateEnemySquads {};
		class callReinforcements {};
		class civilianHit {};
		class civilianKilled {};
		class civilianWalking {};
		class clearArea {};
		class createMarker {};
		class createMines {};
		class createMortar {};
		class createOrLoadSave {};
		class createPatrols {};
		class createSquad {};
		class createStatic {};
		class createTower {};
		class createUnit {};
		class createVehicle {};
		class deleteGroup {};
		class entityKilled {};
		class factoryLoop {};
		class findAirSpawn {};
		class findObjectivePosition {};
		class forceCreateFactionCrew {};
		class getBuildings {};
		class initPatrol {};
		class isNight {};
		class logisticsLoop {};
		class logisticsStartRoute {};
		class mainSectorLoop {};
		class monitorSector {};
		class playerConnected {};
		class ropeAttach {};
		class saveGame {};
		class setupLocations {};
		class setupSuicideBomber {};
		class spawnAmbientCiv {};
		class spawnAmbientCivAir {};
		class spawnAmbientOpfor {};
		class spawnAssault {};
		class spawnAttackHelicopters {};
		class spawnCivilians {};
		class spawnGuerillas {};
		class surrenderUnit {};
		class towerDestroyed {};
		class updateCivRep {};
		class updateIntel {};
		class updateThreat {};
		class wipeSave {};
		class zeusLocalityChanged {};
	};

	class Util {
		file = "Util";
		class addAceActions {};
		class addDepotRaidAction {};
		class checkMap {};
		class checkNumber {};
		class checkVehicleAccess {};
		class conditionChecker {};
		class createBluforMarkers {};
		class destroyItem {};
		class endGame {};
		class gatherIntel {};
		class getAverageStrength {};
		class getBuildings {};
		class getCaptureRatio {};
		class getFrontlineSectors {};
		class getInMan {};
		class getMissionProgress {};
		class getNearestFob {};
		class getNearestSector {};
		class getSectorsByType {};
		class getSectorTypeIndex {};
		class initCBAsettings {};
		class isNearFob {};
		class isNearSector {};
		class notify {};
		class seatSwitchedMan {};
		class secureUAV {};
		class showMapInfo {};
		class updateUI {};
	};
};