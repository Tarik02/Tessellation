#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateBricksInWorld(Tile* tile, TilePos const& pos){
	//block
	setRenderBox(0.00, 0.00, 0.00, 16.00, 16.00, 16.00);
	tessellateBlockInWorld(tile, pos);
	
	//top
	if(shouldRenderFace(pos, 0)==true){
		setRenderBox(0.00, 16.00, 0.00, 3.00, 16.40, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, 16.00, 0.00, 11.00, 16.40, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, 16.00, 0.00, 16.00, 16.40, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 16.00, 4.00, 7.00, 16.40, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 16.00, 4.00, 15.00, 16.40, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 16.00, 8.00, 3.00, 16.40, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, 16.00, 8.00, 11.00, 16.40, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, 16.00, 8.00, 16.00, 16.40, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 16.00, 12.00, 7.00, 16.40, 15.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 16.00, 12.00, 15.00, 16.40, 15.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//south
	if(shouldRenderFace(pos, 2)==true){
		setRenderBox(13.00, 13.00, -0.40, 16.00, 16.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(5.00, 13.00, -0.40, 12.00, 16.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 13.00, -0.40, 4.00, 16.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(9.00, 9.00, -0.40, 16.00, 12.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(1.00, 9.00, -0.40, 8.00, 12.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(13.00, 5.00, -0.40, 16.00, 8.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(5.00, 5.00, -0.40, 12.00, 8.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 5.00, -0.40, 4.00, 8.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(9.00, 1.00, -0.40, 16.00, 4.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(1.00, 1.00, -0.40, 8.00, 4.00, 0.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//west
	if(shouldRenderFace(pos, 5)==true){
		setRenderBox(16.00, 13.00, 13.00, 16.40, 16.00, 16.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 13.00, 5.00, 16.40, 16.00, 12.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 13.00, 0.00, 16.40, 16.00, 4.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 9.00, 9.00, 16.40, 12.00, 16.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 9.00, 1.00, 16.40, 12.00, 8.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 5.00, 13.00, 16.40, 8.00, 16.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 5.00, 5.00, 16.40, 8.00, 12.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 5.00, 0.00, 16.40, 8.00, 4.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 1.00, 9.00, 16.40, 4.00, 16.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 1.00, 1.00, 16.40, 4.00, 8.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//north
	if(shouldRenderFace(pos, 3)==true){
		setRenderBox(0.00, 13.00, 16.00, 3.00, 16.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, 13.00, 16.00, 11.00, 16.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, 13.00, 16.00, 16.00, 16.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 9.00, 16.00, 7.00, 12.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 9.00, 16.00, 15.00, 12.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 5.00, 16.00, 3.00, 8.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, 5.00, 16.00, 11.00, 8.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, 5.00, 16.00, 16.00, 8.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, 1.00, 16.00, 7.00, 4.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 1.00, 16.00, 15.00, 4.00, 16.40);
		tessellateBlockInWorld(tile, pos);
	}
	
	//east
	if(shouldRenderFace(pos, 4)==true){
		setRenderBox(-0.40, 13.00, 0.00, 0.00, 16.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 13.00, 4.00, 0.00, 16.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 13.00, 12.00, 0.00, 16.00, 16.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 9.00, 0.00, 0.00, 12.00, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 9.00, 8.00, 0.00, 12.00, 15.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 5.00, 0.00, 0.00, 8.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 5.00, 4.00, 0.00, 8.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 5.00, 12.00, 0.00, 8.00, 16.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 1.00, 0.00, 0.00, 4.00, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 1.00, 8.00, 0.00, 4.00, 15.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//bottom
	if(shouldRenderFace(pos, 0)==true){
		setRenderBox(0.00, -0.40, 0.00, 3.00, 0.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, -0.40, 0.00, 11.00, 0.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, -0.40, 0.00, 16.00, 0.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, -0.40, 4.00, 7.00, 0.00, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, -0.40, 4.00, 15.00, 0.00, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, -0.40, 8.00, 3.00, 0.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, -0.40, 8.00, 11.00, 0.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, -0.40, 8.00, 16.00, 0.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(0.00, -0.40, 12.00, 7.00, 0.00, 15.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, -0.40, 12.00, 15.00, 0.00, 15.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	return true;
}
