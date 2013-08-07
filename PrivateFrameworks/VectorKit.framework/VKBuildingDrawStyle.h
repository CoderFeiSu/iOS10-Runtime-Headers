/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingDrawStyle : VKDrawStyle  {
    BOOL _hasStrokeColor3D;
    BOOL _hasStrokeWidth3D;
    struct VKProfileSparseRamp<signed char> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } visibility;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } topColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } facadeColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } outlineColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } landmarkColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } flatColor;
    struct VKProfileSparseRamp<signed char> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } outline;
    int roofStyle;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } footprintStrokeColor;
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } footprintStrokeWidth;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } strokeColor3D;
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } strokeWidth3D;
}


- (BOOL)outlineAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })outlineColorAtZoom:(float)arg1;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned int)arg2 globals:(id)arg3;
- (int)roofStyle;
- (BOOL)visibleAtZoom:(float)arg1;
- (float)strokeWidth3DAtZoom:(float)arg1;
- (BOOL)hasStrokeWidth3D;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })strokeColor3DAtZoom:(float)arg1;
- (BOOL)hasStrokeColor3D;
- (float)footprintStrokeWidthAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })footprintStrokeColorAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })flatColorAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })landmarkColorAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })facadeColorAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })topColorAtZoom:(float)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)variant;

@end