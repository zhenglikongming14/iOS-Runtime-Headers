/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVAOLoader : TSCH3DResourceLoader {
}

- (struct VAOLoadResult { boolx1; boolx2; id x3; })activateObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; } x1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_1_1; struct Lookup {} *x_2_1_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_2_1; } x_2_1_3; } x2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_3_1_1[8]; } x3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_2_1; int x_1_2_2; boolx_1_2_3; boolx_1_2_4; boolx_1_2_5; long long x_1_2_6; struct TextureSizeHint { int x_7_3_1; struct tvec2<int> { union { int x_1_5_1; int x_1_5_2; int x_1_5_3; } x_2_4_1; union { int x_2_5_1; int x_2_5_2; int x_2_5_3; } x_2_4_2; } x_7_3_2; } x_1_2_7; boolx_1_2_8; } x_4_1_1[8]; } x4; }*)arg1 indices:(id)arg2 insideSession:(id)arg3;
- (void)bindHandle:(id)arg1 config:(void*)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)generateHandleWithConfig:(void*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;

@end
