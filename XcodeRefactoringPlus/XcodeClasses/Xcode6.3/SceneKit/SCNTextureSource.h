//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNTextureSource : NSObject
{
}

- (double)nextFrameTime;
-     // Error parsing type: v24@0:8^{__C3DRendererContext={__CFRuntimeBase=Q[4C]I}iI(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})IIIfI[3(C3DMatrix4x4=[16f][4])]^{__C3DTexture}^{__C3DStack}^vBBBBBI^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DRendererContextStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[16I]Ii^{__C3DBlendStates}^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^viii}{?=[5I][5i][7{?=iII}][7I]^?^?^?^?^?^?^?^?^?^?}^{__C3DArray}II^{__CFArray}^{__C3DArray}I}16, name: cleanup:
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 nextFrameTime:(double *)arg2;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;

@end