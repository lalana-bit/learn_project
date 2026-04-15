# C 语言项目示例

这是一个简单的 C 语言项目示例，用于学习稳定架构和工具链用法。

## 项目结构

```
C_test/
├── include/              # 头文件目录
│   ├── logger.h          # 日志模块接口
│   └── app.h             # 应用程序模块接口
├── src/                  # 源代码目录
│   ├── utils/            # 工具模块
│   │   └── logger.c      # 日志模块实现
│   └── app/              # 应用程序模块
│       └── app.c         # 应用程序模块实现
├── .vscode/              # VS Code 配置
│   └── settings.json     # 编辑器设置
├── CMakeLists.txt        # CMake 构建配置
├── main.c                # 主函数
└── README.md             # 项目文档
```

## 模块

### 1. 日志模块
- 提供不同级别的日志输出功能
- 支持 DEBUG、INFO、WARNING 和 ERROR 级别
- 简单轻量的实现

### 2. 应用程序模块
- 管理应用程序生命周期
- 演示基本的模块化设计
- 展示如何使用日志模块

## 工具链配置

### CMake
- 使用 CMake 3.10+ 作为构建系统
- 启用 `CMAKE_EXPORT_COMPILE_COMMANDS` 生成 `compile_commands.json`，支持 clangd
- 设置 C11 标准
- 配置构建单个可执行文件

### Clangd
- 提供智能代码补全
- 支持跳转到定义和查找引用
- 支持代码诊断和格式化
- 配置文件：`.vscode/settings.json`

## 构建和运行

### 构建步骤

1. 确保安装了 CMake 和 C 编译器（GCC 或 MSVC）
2. 创建并进入 build 目录：
   ```bash
   mkdir -p build && cd build
   ```
3. 运行 CMake 生成构建文件：
   ```bash
   cmake ..
   ```
4. 编译项目：
   ```bash
   cmake --build .
   ```

### 运行应用程序

- 运行可执行文件：
  ```bash
  ./Debug/hello_app.exe
  ```

## 示例输出

```
[INFO] App MyApp initialized
[INFO] App MyApp running
[DEBUG] Iteration 0
[DEBUG] Iteration 1
[DEBUG] Iteration 2
[DEBUG] Iteration 3
[DEBUG] Iteration 4
[INFO] App MyApp stopped
[INFO] Cleaning up app MyApp
Application terminated
```

## 学习要点

1. **模块化设计**：项目分为多个模块，每个模块有明确的职责
2. **头文件**：演示如何正确使用头文件定义接口
3. **CMake 构建系统**：展示如何配置 CMake 构建简单项目
4. **Clangd 集成**：配置 clangd 提供更好的开发体验
5. **代码组织**：遵循 C 项目的标准目录结构
6. **工具链使用**：设置完整的 C 开发工具链

## 扩展项目

要扩展此项目：

1. **添加新模块**：在 `include/` 创建新头文件，在 `src/` 创建实现文件
2. **更新 CMakeLists.txt**：将新源文件添加到构建配置
3. **使用现有模块**：包含头文件并使用提供的函数
4. **添加测试**：创建测试目录并添加测试用例

## 故障排除

- **构建错误**：检查所有头文件是否正确包含，CMake 配置是否正确
- **Clangd 问题**：确保 `compile_commands.json` 在 build 目录中生成
- **运行时错误**：使用日志模块添加调试信息

这个项目为学习 C 语言开发提供了坚实的基础，包括现代工具和最佳实践。
