#include "PostProcessing.h"

void Vigniette::UpdateShader() {
	//Set intensity
	currentShader->SetFloat("iIntensity", intensity);
	currentShader->SetFloat("iExtent", extent);
	//Update resolution
	currentShader->SetVec2("iResolution", resolution);
}